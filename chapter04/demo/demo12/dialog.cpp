#include "dialog.h"
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    tabWidget = new QTabWidget(this);
    //第一个页面的部件
    QWidget *widget = new QWidget();
    QLineEdit *lineEdit = new QLineEdit(widget);
    lineEdit->setGeometry(10, 10, 190, 30);
    QPushButton *pushButton = new QPushButton("Test", widget);
    pushButton->setGeometry(10, 45, 190, 30);
    //第二个页面的部件
    QLabel *label = new QLabel("Hello Qt");
    label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    //第三个页面的部件
    QPushButton *pushButton3 = new QPushButton("Click Me");
    //向QTabWidget中添加页面
    tabWidget->addTab(widget, "Tab1");
    tabWidget->addTab(label, "Tab2");
    tabWidget->addTab(pushButton3, "Tab3");

    tabWidget->setGeometry(0, 0, 220, 150);
    this->resize(220, 150);
    this->setWindowTitle("QTabWidgetDemo");
}

Dialog::~Dialog()
{

}
