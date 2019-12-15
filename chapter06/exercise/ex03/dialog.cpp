#include "dialog.h"
#include "ui_dialog.h"
#include <QImage>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->desktop->setPixmap(QPixmap::fromImage(QImage(":/desktop.ico")));
    ui->computer->setPixmap(QPixmap::fromImage(QImage(":/computer.ico")));
    ui->docs->setPixmap(QPixmap::fromImage(QImage(":/docs.ico")));
    ui->icon01->setPixmap(QPixmap::fromImage(QImage(":/icon01.ico")));
    ui->icon02->setPixmap(QPixmap::fromImage(QImage(":/icon02.ico")));
    ui->icon03->setPixmap(QPixmap::fromImage(QImage(":/icon03.ico")));
    ui->icon04->setPixmap(QPixmap::fromImage(QImage(":/icon04.ico")));

    ui->saveComboBox->addItem(QIcon(":/folder.ico"), "练习");
    ui->fileNameComboBox->addItem("hello");
    ui->fileTypeComboBox->addItem("Dev-C++ project (*.dev)");
}

Dialog::~Dialog()
{
    delete ui;
}
