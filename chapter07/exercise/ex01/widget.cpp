#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->moveObject->setPixmap(QPixmap::fromImage(QImage(":/cloud.ico")));
    timerId = 0;
}

void Widget::mousePressEvent(QMouseEvent *e)
{
    if(timerId == 0)
    {
        nextX = e->x();
        nextY = e->y();
        qDebug()<<"当前坐标：("<<ui->moveObject->x()<<","<<ui->moveObject->y()<<")";
        qDebug()<<"鼠标坐标：("<<nextX<<","<<nextY<<")";

        timerId = this->startTimer(10);
        qDebug()<<"timerId:"<<timerId;
    }
}

void Widget::timerEvent(QTimerEvent *event)
{
    int speed = 1;
    bool isFinishX = false;
    bool isFinishY = false;
    int imgHalfWidth = 24;
    int imgHalfHeight = 24;

    if(ui->moveObject->x()+imgHalfWidth < nextX)
        ui->moveObject->move(ui->moveObject->x()+speed, ui->moveObject->y());
    else if(ui->moveObject->x()+imgHalfWidth > nextX)
        ui->moveObject->move(ui->moveObject->x()-speed, ui->moveObject->y());
    else
        isFinishX = true;

    if(ui->moveObject->y()+imgHalfHeight < nextY)
        ui->moveObject->move(ui->moveObject->x(), ui->moveObject->y()+speed);
    else if(ui->moveObject->y()+imgHalfHeight > nextY)
        ui->moveObject->move(ui->moveObject->x(), ui->moveObject->y()-speed);
    else
        isFinishY = true;

    if(isFinishX && isFinishY)
    {
        this->killTimer(timerId);
        timerId = 0;
    }
}
Widget::~Widget()
{
    delete ui;
}
