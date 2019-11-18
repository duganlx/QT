#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Qt5.3 窗体应用");
    this->setMaximumSize(400, 400);
    this->setMinimumSize(300, 300);
}

Widget::~Widget()
{
    delete ui;
}
