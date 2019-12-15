#include "widget.h"
#include "mylabel.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    myLabel *label = new myLabel(this); //创建标签对象
    label->setAlignment(Qt::AlignCenter);   //设置对齐方式
    label->resize(260, 150);
    label->show();
}

Widget::~Widget()
{

}
