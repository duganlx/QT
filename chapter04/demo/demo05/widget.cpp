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

void Widget::on_radioBtn1_clicked()
{
    ui->radioBtn1->setChecked(true); //把按钮1按下的消息发送出去
    ui->label->setText("RadioButton1 is checked!");
}

void Widget::on_radioBtn2_clicked()
{
    ui->radioBtn2->setChecked(true);
    ui->label->setText("RadioButton2 is checked!");
}

void Widget::on_checkBox1_clicked()
{
    this->displayCheckBox();
}

void Widget::on_checkBox2_clicked()
{
    this->displayCheckBox();
}

void Widget::displayCheckBox()
{
    QString str = "";
    if(ui->checkBox1->isChecked() && ui->checkBox2->isChecked())
    {
        str = "CheckBox1 is Checked! \nCheckBox2 is Checked!";
    }else if (ui->checkBox1->isChecked()) {
        str += "CheckBox1 is Checked!";
    }else if (ui->checkBox2->isChecked()) {
        str += "CheckBox2 is Checked!";
    }
    ui->label_2->setText(str);
}

