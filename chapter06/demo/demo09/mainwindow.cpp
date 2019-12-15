#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QMdiSubWindow>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_mdiArea = new QMdiArea;
    this->setCentralWidget(m_mdiArea);
    connect(ui->actionnew, SIGNAL(triggered()), this, SLOT(actNewWindow()));
}

void MainWindow::actNewWindow()
{
    //这里每个子窗体都是一个QLabel部件
    QLabel *label = new QLabel(tr("MDI SubWindow!"));
    QMdiSubWindow *subWin = new QMdiSubWindow;
    subWin->setWidget(label);
    subWin->setAttribute(Qt::WA_DeleteOnClose);
    subWin->resize(180, 100);
    m_mdiArea->addSubWindow(subWin);

    subWin->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
