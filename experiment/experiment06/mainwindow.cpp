#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addDialog.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_triggered()
{
    addDialog *dialog = new addDialog(this);
    connect(dialog, SIGNAL(sendData(QString,QString,QString)),
            this, SLOT(receiveData(QString,QString,QString)));
    dialog->show();
}

void MainWindow::receiveData(QString name, QString age, QString gender)
{
    QString record;
    record = name + "\t" + gender + "\t" + age;
    qDebug()<<"mainWindow-->"<<name<<" "<<age<<" "<<gender;
    ui->list->addItem(new QListWidgetItem(QIcon(":/user.png"), record));
}
