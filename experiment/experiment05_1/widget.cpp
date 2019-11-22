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

void Widget::on_showSubStrButton_clicked()
{
    QString originalStr = ui->originalStr->text();
    QString aimStr = originalStr.mid(2, 3);
    ui->showSubStrLabel->setText(aimStr);
}


void Widget::on_showLengthButton_clicked()
{
    QString originalStr = ui->originalStr->text();
    int length = originalStr.length();
    ui->showLengthLabel->setNum(length);
}

void Widget::on_compareLenButton_clicked()
{
    QString originalStr = ui->originalStr->text();
    QString aimSubStr = ui->aimSubStr->text();
    if(originalStr > aimSubStr)
        ui->compareLenLabel->setText("True");
    else
        ui->compareLenLabel->setText("False");
}

void Widget::on_indexOfSubStrButton_clicked()
{
    QString originalStr = ui->originalStr->text();
    QString aimSubStr = ui->aimSubStr->text();
    int index = originalStr.indexOf(aimSubStr);
    ui->indexOfSubStrLabel->setNum(index);
}

void Widget::on_upperStrButton_clicked()
{
    QString originalStr = ui->originalStr->text();
    QString res = originalStr.toUpper();
    ui->upperStrLabel->setText(res);
}

void Widget::on_addSubStrButton_clicked()
{
    QString originalStr = ui->originalStr->text();
    QString aimSubStr = ui->aimSubStr->text();
    QString res = originalStr + aimSubStr;
    ui->addSubStrLabel->setText(res);

}

void Widget::on_addButton_clicked()
{
    bool vertNum1 = true;
    bool vertNum2 = true;
    QString numStr1 = ui->addNum1->text();
    QString numStr2 = ui->addNum2->text();
    double num1 = numStr1.toDouble(&vertNum1);
    double num2 = numStr2.toDouble(&vertNum2);
    if(vertNum1 && vertNum2)
    {
        double res = num1 + num2;
        ui->addResLabel->setNum(res);
    }
    else
        ui->addResLabel->setText("error");
}
