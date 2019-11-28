#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->comboBox->addItem("正常");
    ui->comboBox->addItem("不正常");
    ui->opacity->setText("   100%");
    ui->fill->setText("   100%");

    QImage icon1(":/whiteboard.png");
    ui->icon_1->setPixmap(QPixmap::fromImage(icon1));
    QImage icon2(":/ink_pen.png");
    ui->icon_2->setPixmap(QPixmap::fromImage(icon2));
    QImage icon3(":/crossme.png");
    ui->icon_3->setPixmap(QPixmap::fromImage(icon3));
    QImage icon4(":/lock.png");
    ui->icon_4->setPixmap(QPixmap::fromImage(icon4));

    ui->layers->addItem(new QListWidgetItem(QIcon(":/eye.png"), tr("图层1")));
    ui->layers->addItem(new QListWidgetItem(QIcon(":/eye.png"), tr("背景")));

    ui->colors->addItem(new QListWidgetItem(QIcon(":/eye.png"), tr("RGB")));
    ui->colors->addItem(new QListWidgetItem(QIcon(":/eye.png"), tr("红")));
    ui->colors->addItem(new QListWidgetItem(QIcon(":/eye.png"), tr("绿")));
    ui->colors->addItem(new QListWidgetItem(QIcon(":/eye.png"), tr("蓝")));
}

Widget::~Widget()
{
    delete ui;
}
