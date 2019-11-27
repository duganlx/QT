#include "widget.h"
#include "ui_widget.h"
#include <QImage>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->Degrees->addItem(new QListWidgetItem("学士"));
    ui->Degrees->addItem(new QListWidgetItem("硕士"));
    ui->Degrees->addItem(new QListWidgetItem("博士"));
    ui->Degrees->addItem(new QListWidgetItem("博士后"));

    ui->techTitles->addItem("qt黑铁级攻城狮");
    ui->techTitles->addItem("qt青铜级攻城狮");
    ui->techTitles->addItem("qt白银级攻城狮");
    ui->techTitles->addItem("qt黄金级攻城狮");
    ui->techTitles->addItem("qt铂金级攻城狮");
    ui->techTitles->addItem("qt砖石级攻城狮");
    ui->techTitles->addItem("qt宗师级攻城狮");
    ui->techTitles->addItem("qt王者级攻城狮");
    ui->techTitles->addItem("qt秃顶级攻城狮");

    QImage image(":/touxiang.jpg");
    image.scaled(ui->photo->width(), ui->photo->height(), Qt::IgnoreAspectRatio);
    ui->photo->setPixmap(QPixmap::fromImage(image));
}

Widget::~Widget()
{
    delete ui;
}
