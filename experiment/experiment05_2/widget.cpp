#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    genderGroup = new QButtonGroup(this);
    genderGroup->addButton(ui->male, 0);
    genderGroup->addButton(ui->female, 1);

    ui->Degrees->addItem(new QListWidgetItem("Bacholar"));
    ui->Degrees->addItem(new QListWidgetItem("Master"));
    ui->Degrees->addItem(new QListWidgetItem("Doctor"));

    ui->Departments->addItem(new QListWidgetItem("Tech"));
    ui->Departments->addItem(new QListWidgetItem("Logistic"));
    ui->Departments->addItem(new QListWidgetItem("Accounting"));
    ui->Departments->addItem(new QListWidgetItem("Secu"));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_addItem_clicked()
{
    QString name = ui->name->text();
    QString age = ui->age->text();
    QString gender = genderGroup->checkedId()==1 ? "女" : "男";
    QString degree = ui->Degrees->currentItem()->text();
    QString dept = ui->Departments->currentItem()->text();
    qDebug()<< name <<" "<<age<<" "<<gender<<" "<<degree<<" "<<dept;

    QString item = name+" "+age+" "+gender+" "+degree+" "+dept;
    ui->rosters->addItem(new QListWidgetItem(item));
}
