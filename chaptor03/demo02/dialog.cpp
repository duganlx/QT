#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
//    ui->setupUi(this);
    resize(150, 150);
    label = new QLabel(this);
    label->setText("Hello QT!");
    label->setGeometry(0, 0, 100, 100);
}

Dialog::~Dialog()
{
    delete ui;
}
