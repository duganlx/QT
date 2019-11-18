#include "dialog.h"
#include <QIcon>
#include <QList>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    tree = new QTreeWidget(this);
    tree->setColumnCount(1); //设置QTreeWidget的列数
    tree->setHeaderHidden(true); //设置QTreeWidget标题头隐藏
    QTreeWidgetItem *Friend = new QTreeWidgetItem(tree, QStringList(QString("朋友"))); //创建QTreeWidget的"朋友"节点，父节点是tree
    QTreeWidgetItem *frd = new QTreeWidgetItem(Friend); //给Friend节点增加一个子节点
    frd->setText(0, "老张");
    frd->setIcon(0, QIcon(tr(":/zhang.png")));

    QTreeWidgetItem *ClassMate = new QTreeWidgetItem(tree, QStringList(QString("同学"))); //创建一个"同学"节点
    QTreeWidgetItem *Fly = new QTreeWidgetItem(QStringList(QString("fly")));    //Fly是ClassMate的子节点
    ClassMate->addChild(Fly); //添加子节点的另一种方法
    QTreeWidgetItem *Strange = new QTreeWidgetItem(tree);
    Strange->setText(0, tr("陌生人"));

    //顶层
    tree->addTopLevelItem(ClassMate);
    tree->addTopLevelItem(Strange);
    tree->expandAll(); //展开QTreeWidget的所有节点

    connect(tree, SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)),
            this, SLOT(item_DblClicked(QTreeWidgetItem*, int)));
    this->setWindowTitle(tr("QTreeWidget的使用"));
    this->resize(230, 200);
    tree->resize(230, 200);
    this->setWindowIcon(QIcon("hahaya.png")); //设置应用程序的图标
}

void Dialog::item_DblClicked(QTreeWidgetItem* item, int column)
{
    QString str = item->text(column);
    QMessageBox::warning(this, "响应双击事件", "你双击列\'"+str+"\'",
        QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
}

Dialog::~Dialog()
{

}
