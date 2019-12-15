#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->slider1, SIGNAL(valueChanged(int)), ui->lcd1, SLOT(display(int)));
    connect(ui->slider2, SIGNAL(valueChanged(int)), ui->lcd2, SLOT(display(int)));
    connect(ui->slider3, SIGNAL(valueChanged(int)), ui->lcd3, SLOT(display(int)));
    connect(ui->slider4, SIGNAL(valueChanged(int)), ui->lcd4, SLOT(display(int)));
    connect(ui->slider5, SIGNAL(valueChanged(int)), ui->lcd5, SLOT(display(int)));
    connect(ui->slider6, SIGNAL(valueChanged(int)), ui->lcd6, SLOT(display(int)));
}

Dialog::~Dialog()
{
    delete ui;
}
