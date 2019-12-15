#include "widget.h"
#include <QKeyEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    btn = new QPushButton("可移动", this);
    btn->setGeometry(40, 40, 60, 30);   //设置按钮位置
    setFocusPolicy(Qt::StrongFocus);    //接收的顶的按键信息
}

void Widget::keyPressEvent(QKeyEvent *e)
{
    int x = btn->x();   //获取按钮x坐标
    int y = btn->y();   //获取按钮y坐标
    switch (e->key()) {
    case Qt::Key_W: //可换成Qt::key_Up
        btn->move(x, y-10);
        break;
    case Qt::Key_S: //可换成Qt::key_Down
        btn->move(x, y+10);
        break;
    case Qt::Key_A: //可换成Qt::key_Left
        btn->move(x-10, y);
        break;
    case Qt::Key_D: //可换成Qt::key_Right
        btn->move(x+10, y);
        break;
    }
    QWidget::keyPressEvent(e);  //调用函数,时间处理函数运行
}

Widget::~Widget()
{

}
