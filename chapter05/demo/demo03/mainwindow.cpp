#include "mainwindow.h"
#include <QAction>
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //定义QAction
    setAction = new QAction(QIcon(":/img/setting.png"), tr("选项..."), this);
    setAction->setStatusTip(tr("环境设定"));
    connect(setAction, &QAction::triggered, this, &MainWindow::setting);

    //添加菜单
    QMenu *tool = menuBar()->addMenu(tr("工具"));
    tool->addAction(setAction);

    //添加工具栏按钮
    QToolBar *toolBar = addToolBar(tr("工具"));
    toolBar->addAction(setAction);

    //设置状态栏信息
    QStatusBar *status = statusBar();
    status->addAction(setAction);
    resize(300, 200);
}

void MainWindow::setting()
{
    myDialog dialog(this);
    dialog.exec();
}

MainWindow::~MainWindow()
{

}
