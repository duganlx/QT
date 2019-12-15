#include "mylabel.h"

myLabel::myLabel(QWidget *parent):QLabel (parent)
{}

void myLabel::mousePressEvent(QMouseEvent *ev)
{
    //显示鼠标位置
    setText(QString("Press: %1, %2").arg(QString::number(ev->x()), QString::number(ev->y())));
}

void myLabel::mouseReleaseEvent(QMouseEvent *ev)
{
    //显示鼠标位置
    setText(QString("Release: %1, %2").arg(QString::number(ev->x()), QString::number(ev->y())));
}

void myLabel::mouseMoveEvent(QMouseEvent *ev)
{
    //显示鼠标位置
    setText(QString("Move: %1, %2").arg(QString::number(ev->x()), QString::number(ev->y())));
}
