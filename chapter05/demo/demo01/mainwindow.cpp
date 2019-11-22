#include "mainwindow.h"
#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Main Window"));
    //定义QAction
    openAction = new QAction(QIcon(":/img/open.png"), tr("&Open..."), this);
    openAction->setShortcuts(QKeySequence::Open); //添加快捷方式
    openAction->setStatusTip(tr("Open an existing file")); //状态信息
    connect(openAction, &QAction::triggered, this, &MainWindow::open);

    //添加菜单
    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);

    //添加工具栏按钮
    QToolBar * toolBar = addToolBar(tr("&File"));
    toolBar->addAction(openAction);

    //设置状态栏信息
    QStatusBar *status = statusBar();
    status->addAction(openAction);

    //实现右击弹出文件菜单
    this->addAction(openAction);
    this->setContextMenuPolicy(Qt::ActionsContextMenu);
}

void MainWindow::open()
{
    QMessageBox::information(this, tr("Information"), tr("Open"));
}

MainWindow::~MainWindow()
{

}
