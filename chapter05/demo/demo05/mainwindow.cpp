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

    label = new QLabel("", this);
    label->setGeometry(0, 60, 300, 140);
}

void MainWindow::setting()
{
    myDialog *dialog = new myDialog(this);
    //关联信号和槽函数
    connect(dialog, SIGNAL(sendData(QString, QString, QString, bool, bool)),
            this, SLOT(receiveData(QString, QString, QString, bool, bool)));
    dialog->show();
}

void MainWindow::receiveData(QString s1, QString s2, QString s3, bool b1, bool b2)
{
    QString str;
    str = "工程目录：" + s1 + "\n";
    str = str + "编译环境：" + s2 + "\n";
    str = str + "高度显示：" + s3 + "\n";
    if(b1)
        str = str + "智能缩进：是\n";
    else
        str = str + "智能缩进：否\n";

    if(b2)
        str = str + "代码补全：是\n";
    else
        str = str + "代码补全：否\n";

    label->setText(str);
}

MainWindow::~MainWindow()
{

}
