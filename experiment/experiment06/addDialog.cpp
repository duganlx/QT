#include "addDialog.h"
#include "ui_addDialog.h"
#include <QDebug>

addDialog::addDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addDialog)
{
    ui->setupUi(this);

    genderGroup = new QButtonGroup(this);
    genderGroup->addButton(ui->male, 0);
    genderGroup->addButton(ui->female, 1);
}

addDialog::~addDialog()
{
    delete ui;
}

void addDialog::on_buttonBox_accepted()
{
    QString name = ui->name->text();
    QString age = ui->age->text();
    QString gender = genderGroup->checkedId()==1 ? "女" : "男";

    qDebug()<<"addDialog-->"<<name<<" "<<age<<" "<<gender;

    emit sendData(name, age, gender);
}
