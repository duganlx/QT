#include "widget.h"
#include <QTableWidget>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //构造了一个QTableWidget的对象，并设置为10行,5列
    QTableWidget *tableWidget = new QTableWidget(10, 5, this);
    tableWidget->setWindowTitle("QTableWidget & Item");
    //添加表头
    QStringList header;
    header<<"Month"<<"Name"<<"Description";
    tableWidget->setHorizontalHeaderLabels(header);
    //添加第1列(从0开始计数)
    tableWidget->setItem(0, 0, new QTableWidgetItem("Jan"));
    tableWidget->setItem(1, 0, new QTableWidgetItem("Feb"));
    tableWidget->setItem(2, 0, new QTableWidgetItem("Mar"));
    //添加第2列
    tableWidget->setItem(0, 1, new QTableWidgetItem(QIcon(":/img/rar.png"), "File1"));
    tableWidget->setItem(1, 1, new QTableWidgetItem(QIcon(":/img/rar.png"), "File2"));
    tableWidget->setItem(2, 1, new QTableWidgetItem(QIcon(":/img/rar.png"), "File3"));

    tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //禁止修改

    tableWidget->show();
}

Widget::~Widget()
{

}
