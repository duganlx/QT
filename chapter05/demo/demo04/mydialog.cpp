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

QString myDialog::getProjectPath()
{
    QString s = ui->lineEdit->text();
    return s;
}

QString myDialog::getCompiler()
{
    if(ui->radioButton->isChecked())
        return QString("VC++ 6.0");
    else if(ui->radioButton_2->isChecked())
        return QString("VC++ 2012");
    else
        return QString("g++");
}

QString myDialog::getColorPlan()
{
    QListWidgetItem *it = ui->listWidget->currentItem();
    return it->text();
}

bool myDialog::getIndent()
{
    if(ui->checkBox->isChecked())
        return true;

    return false;
}

bool myDialog::getAutoComplete()
{
    if(ui->checkBox_2->isChecked())
        return true;

    return false;
}

myDialog::~myDialog()
{
    delete ui;
}
