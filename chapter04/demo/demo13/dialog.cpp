#include "dialog.h"
#include <QListWidget>
#include <QLabel>
#include <QStackedWidget>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QListWidget *leftlist = new QListWidget(this);
    QStackedWidget *stack = new QStackedWidget(this); //层叠窗体
    QLabel *label1 = new QLabel("Label 1");
    QLabel *label2 = new QLabel("Label 2");
    QLabel *label3 = new QLabel("Label 3");
    label1->setAlignment(Qt::AlignCenter);
    //添加层叠窗体
    stack->addWidget(label1);
    stack->addWidget(label2);
    stack->addWidget(label3);
    //设置列表框
    leftlist->addItem("Label1");
    leftlist->addItem("Label2");
    leftlist->addItem("Label3");
    leftlist->setGeometry(10, 10, 70, 200);
    stack->setGeometry(85, 10, 300, 200);
    resize(390, 220);
    //响应在leftlist上的选项改变事件
    connect(leftlist, SIGNAL(currentRowChanged(int)), stack, SLOT(setCurrentIndex(int)));
}

Dialog::~Dialog()
{

}
