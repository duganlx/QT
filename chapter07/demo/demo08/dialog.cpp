#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    count = 0;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::timerEvent(QTimerEvent *event)
{
    count++;
    QString item=tr("第 ")+QString::number(count)+tr("次触发");
    //每次触发都向ListWidget中写入一行信息
    ui->listWidget->addItem(item);
}

void Dialog::on_startBtn_clicked()
{
    timerId = this->startTimer(1000);
}

void Dialog::on_stopBtn_clicked()
{
    this->killTimer(timerId);
}
