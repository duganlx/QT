#include "mydialog.h"
#include "ui_mydialog.h"

myDialog::myDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDialog)
{
    ui->setupUi(this);
    ui->listWidget->addItem("Black Blue Green");
    ui->listWidget->addItem("Brown Green Gray");
    ui->listWidget->addItem("Blue Orange Black");
    ui->listWidget->addItem("Green Yellow Red");
}

myDialog::~myDialog()
{
    delete ui;
}

void myDialog::on_buttonBox_accepted()
{
    //获取工程路径
    QString s1 = ui->lineEdit->text();

    //获取编译器名称
    QString s2;
    if(ui->radioButton->isChecked())
        s2 = QString("VC++ 6.0");
    else if(ui->radioButton_2->isChecked())
        s2 = QString("VC++ 2012");
    else
        s2 = QString("g++");

    //获取颜色方案
    QListWidgetItem *it = ui->listWidget->currentItem();
    QString s3 = it->text();

    //是否缩进
    bool b1 = ui->checkBox->isChecked();

    //是否代码自动补全
    bool b2 = ui->checkBox_2->isChecked();

    emit sendData(s1, s2, s3, b1, b2);
}
