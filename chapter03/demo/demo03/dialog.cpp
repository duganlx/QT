#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog) //创建Ui::Dialog类对象
{
    ui->setupUi(this);  //调用Ui::Dialog中的函数
}

Dialog::~Dialog()
{
    delete ui;
}
