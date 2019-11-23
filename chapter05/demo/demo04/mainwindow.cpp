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
    myDialog dialog(this);
    if(dialog.exec() == QDialog::Accepted)
    {
        QString str;
        str = "工程目录：" + dialog.getProjectPath() + "\n";
        str = str + "编译环境：" + dialog.getCompiler() + "\n";
        str = str + "高度显示：" + dialog.getColorPlan() + "\n";
        if(dialog.getIndent())
            str = str + "智能缩进：是\n";
        else
            str = str + "智能缩进：否\n";

        if(dialog.getAutoComplete())
            str = str + "代码补全：是\n";
        else
            str = str + "代码补全：否\n";

        label->setText(str);
    }
}

MainWindow::~MainWindow()
{

}
