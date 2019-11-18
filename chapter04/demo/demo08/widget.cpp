#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked())
        ui->lineEdit->setReadOnly(true);    //选中则设为只读
    else
        ui->lineEdit->setReadOnly(false);   //未选中则取消只读
}

void Widget::on_checkBox_2_clicked()
{
    //选中加密，未选择正常
    if(ui->checkBox_2->isChecked())
        ui->lineEdit->setEchoMode(QLineEdit::Password);
    else
        ui->lineEdit->setEchoMode(QLineEdit::Normal);
}

void Widget::on_pushButton_clicked()
{
    ui->label->setText(ui->lineEdit->text());   //将编辑框内容显示在标签中
}
