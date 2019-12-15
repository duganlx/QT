#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //创建主分割窗口,设置为水平分割窗口(左右分割)
    mainSplitter = new QSplitter(Qt::Horizontal);

    //创建左部列表框和右部代码详情框
    list = new QTreeWidget(mainSplitter);
    content = new QTextEdit(mainSplitter);

    /*
    * 配置左部列表框
    */
    list->setColumnCount(1); //设置QTreeWidget的列数
    list->setHeaderHidden(true); //设置QTreeWidget标题头隐藏
    QTreeWidgetItem *root = new QTreeWidgetItem(list, QStringList(QString("2_StackedWidget")));
    root->setIcon(0, QIcon(":/folder.ico"));

    QTreeWidgetItem *proFile = new QTreeWidgetItem(root, QStringList(QString("2_StackedWidget.pro")));
    proFile->setIcon(0, QIcon(":/file.ico"));

    QTreeWidgetItem *headFolder = new QTreeWidgetItem(root, QStringList(QString("头文件")));
    headFolder->setIcon(0, QIcon(":/folder.ico"));

    QTreeWidgetItem *sourceFolder = new QTreeWidgetItem(root, QStringList(QString("源文件")));
    sourceFolder->setIcon(0, QIcon(":/folder.ico"));

    QTreeWidgetItem *headFile = new QTreeWidgetItem(headFolder, QStringList(QString("dialog.h")));
    headFile->setIcon(0, QIcon(":/file.ico"));

    QTreeWidgetItem *sourceFile01 = new QTreeWidgetItem(sourceFolder, QStringList(QString("dialog.cpp")));
    sourceFile01->setIcon(0, QIcon(":/file.ico"));

    QTreeWidgetItem *sourceFile02 = new QTreeWidgetItem(sourceFolder, QStringList(QString("main.cpp")));
    sourceFile02->setIcon(0, QIcon(":/file.ico"));

    /*
    * 配置右部代码页
    */
    content->setPlainText("#ifndef DIALOG_H\n"
                          "#define DIALOG_H\n\n"
                          "#include <QDialog>\n\n"
                          "class Dialog: public QDialog\n"
                          "{\n  Q_OBJECT \n"
                          "public:\n"
                          "  Dialog(QWidget *parent = 0);\n"
                          "  ~Dialog();");

    //将主分割设为中央布局
    setCentralWidget(mainSplitter);
    mainSplitter->show();

}



MainWindow::~MainWindow()
{

}
