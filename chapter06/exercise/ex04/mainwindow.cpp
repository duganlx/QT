#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*
    * 配置左部列表框
    */
    list = ui->list;
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


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    content = new QTextEdit(ui->mdiArea);
    content->setPlainText("#ifndef DIALOG_H\n"
                          "#define DIALOG_H\n\n"
                          "#include <QDialog>\n\n"
                          "class Dialog: public QDialog\n"
                          "{\n  Q_OBJECT \n"
                          "public:\n"
                          "  Dialog(QWidget *parent = 0);\n"
                          "  ~Dialog();");

    QMdiSubWindow *subWin = new QMdiSubWindow;
    subWin->setWidget(content);
    subWin->setAttribute(Qt::WA_DeleteOnClose);
    subWin->resize(180, 100);
    ui->mdiArea->addSubWindow(subWin);

    subWin->show();
}
