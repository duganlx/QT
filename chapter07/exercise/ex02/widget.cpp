#include "widget.h"
#include "ui_widget.h"
#include <QKeyEvent>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->moveObject->setPixmap(QPixmap::fromImage(QImage(":/cloud.ico")));
    moveObject = ui->moveObject;
}

void Widget::keyPressEvent(QKeyEvent *e)
{
    int move;
    int speed = 5;
    int imgWidth = 48;
    int imgHeight = 48;

    switch (e->key()) {
    case Qt::Key_W: //可换成Qt::key_Up
        move = (moveObject->y()-speed) >= 0 ? (moveObject->y()-5) : 0;
        moveObject->move(moveObject->x(), move);
        break;
    case Qt::Key_S: //可换成Qt::key_Down
        move = (moveObject->y()+speed+imgWidth) <= 350 ? (moveObject->y()+5) : 350;
        moveObject->move(moveObject->x(), move);
        break;
    case Qt::Key_A: //可换成Qt::key_Left
        move = (moveObject->x()+speed) >= 0 ? (moveObject->x()-5) : 0;
        moveObject->move(move, moveObject->y());
        break;
    case Qt::Key_D: //可换成Qt::key_Right
        move = (moveObject->x()+speed+imgHeight) <= 400 ? (moveObject->x()+5) : 400;
        moveObject->move(move, moveObject->y());
        break;
    }
    qDebug()<<"move:"<<move;
    QWidget::keyPressEvent(e);  //调用函数,时间处理函数运行
}

Widget::~Widget()
{
    delete ui;
}
