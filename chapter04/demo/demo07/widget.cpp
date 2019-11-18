#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    label = new QLabel(this);
    label->setFixedWidth(70);   //设置标签宽度
    list = new QListWidget(this);
    //添加四条记录
    list->addItem(new QListWidgetItem(QIcon(":/images/line.png"), tr("Line")));
    list->addItem(new QListWidgetItem(QIcon(":/images/oval.png"), tr("Oval")));
    list->addItem(new QListWidgetItem(QIcon(":/images/rect.png"), tr("Rectangle")));
    list->addItem(new QListWidgetItem(QIcon(":/images/triangle.png"), tr("Triangle")));
    label->setGeometry(20, 20, 80, 20);
    list->setGeometry(20, 50, 200, 100);
    //关联列表和标签
    connect(list, SIGNAL(currentTextChanged(QString)), label, SLOT(setText(QString)));
}

Widget::~Widget()
{

}
