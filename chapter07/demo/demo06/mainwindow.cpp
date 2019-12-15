#include "mainwindow.h"
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Get Mouse Event"));
    setCursor(Qt::CrossCursor);
    labelStatus = new QLabel();
    labelStatus->setMinimumSize(100, 20);
    labelStatus->setText(tr("Mouse Position:"));
    labelStatus->setFixedWidth(100);

    labelMousePos = new QLabel();
    labelMousePos->setText(tr(""));
    labelMousePos->setFixedWidth(80);

    statusBar()->addPermanentWidget(labelStatus);   //给状态栏添加永久的部件
    statusBar()->addPermanentWidget(labelMousePos);
    this->setMouseTracking(true);   //自动跟踪鼠标

}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    //显示鼠标位置
    labelMousePos->setText("("+QString::number(e->x())+","+QString::number(e->y())+")");
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    QString str = "("+QString::number(e->x())+","+QString::number(e->y())+")";
    if(e->button()==Qt::LeftButton) //左键按下
    {
        //显示临时信息
        statusBar()->showMessage(tr("Mouse Left Button Pressed:")+str);
    }
    else if (e->button()==Qt::RightButton)  //右键按下
    {
        statusBar()->showMessage(tr("Mouse Right Button Pressed:")+str);
    }
    else if(e->button()==Qt::MidButton) //中间键按下
    {
        statusBar()->showMessage(tr("Mouse Middle Button Pressed:")+str);
    }
}

void MainWindow::mouseDoubleClickEvent(QMouseEvent *e)
{
    QString str = "("+QString::number(e->x())+","+QString::number(e->y())+")";
    if(e->button()==Qt::LeftButton)
    {
        statusBar()->showMessage(tr("Mouse Left Button Double Clicked:")+str);
    }
    else if (e->button()==Qt::RightButton)  //右键按下
    {
        statusBar()->showMessage(tr("Mouse Right Button Double Clicked:")+str);
    }
    else if(e->button()==Qt::MidButton) //中间键按下
    {
        statusBar()->showMessage(tr("Mouse Middle Button Double Clicked:")+str);
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    QString str = "("+QString::number(e->x())+","+QString::number(e->y())+")";
    statusBar()->showMessage(tr("Mouse Released:")+str, 3000); //显示3秒
}

MainWindow::~MainWindow()
{

}
