#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ball = ui->ball;
    ball->setPixmap(QPixmap::fromImage(QImage(":/tennis_ball.ico")));
    timerId=0;
    flag = 0;
}

void Widget::mousePressEvent(QMouseEvent *e)
{
    if(timerId==0){
        timerId = this->startTimer(10);
        qDebug()<<"timerId:"<<timerId;
    }
}

void Widget::timerEvent(QTimerEvent *event)
{
    int imgSize = 48;
    switch (flag)
    {
    case 0: //右下
        ball->move(ball->x()+1, ball->y()+1);
        break;
    case 1: //右上
        ball->move(ball->x()+1, ball->y()-1);
        break;
    case 2: //左上
        ball->move(ball->x()-1, ball->y()-1);
        break;
    case 3: //左下
        ball->move(ball->x()-1, ball->y()+1);
        break;
    }

    if(ball->y() >= 300-imgSize)
        flag = (++flag)%4;
    if(ball->x() >= 400-imgSize)
        flag = (++flag)%4;
    if(ball->y() <= 0)
        flag = (++flag)%4;
    if(ball->x() <= 0)
        flag = (++flag)%4;

    qDebug()<<"x:"<<ball->x()<<",y:"<<ball->y();
}

Widget::~Widget()
{
    delete ui;
}
