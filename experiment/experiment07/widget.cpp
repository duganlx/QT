#include "widget.h"
#include "ui_widget.h"
#include <QImage>
#include <QPalette>
#include <QDebug>
#include <QTime>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setColor(QPalette::Background, QColor(205, 205, 0));
    ui->finalLine->setAutoFillBackground(true);
    ui->finalLine->setPalette(palette);
    ui->duck1->setPixmap(QPixmap::fromImage(QImage(":/duck.ico")));
    ui->duck2->setPixmap(QPixmap::fromImage(QImage(":/duck2.ico")));
    //设置鸭子不被终点label遮挡
    ui->duck1->raise();
    ui->duck2->raise();
}

void Widget::mousePressEvent(QMouseEvent *ev)
{
    qDebug()<<"mousePressEvent()"<<ev->button();
    if(ev->button())
    {
        qDebug()<<ui->finalLine->x();
        timerId = this->startTimer(300);
    }
}

void Widget::timerEvent(QTimerEvent *event)
{
    int moveNum = generateRandomNumber(10);
    qDebug()<<"timerEvent()"<<moveNum;
    ui->duck1->move(ui->duck1->x()+moveNum, ui->duck1->y());

    moveNum = generateRandomNumber(10);
    ui->duck2->move(ui->duck2->x()+moveNum, ui->duck2->y());

    int size = 40;

    int duck1 = ui->duck1->x() + size; //72为图片大小
    int duck2 = ui->duck2->x() + size; //72为图片大小
    int max = duck1 > duck2 ? duck1 : duck2;

    if(max >= ui->finalLine->x())
    {
        bool duck1IsWinner = duck1 > duck2 ? true : false;
        killTimer(timerId);
        qDebug()<<"game over"<<duck1IsWinner;
        QString res = "";
        res += duck1IsWinner ? "A鸭子获胜" : "B鸭子获胜";
        ui->result->setText(res);
    }
}

int Widget::generateRandomNumber(int max)
{
    QTime time;
    time= QTime::currentTime();
    qsrand(uint(time.msec()+time.second()*1000));

    int num = qrand() % max;
    qDebug()<<"generateRandomNumber()"<<num;
    return num;
}

Widget::~Widget()
{
    delete ui;
}
