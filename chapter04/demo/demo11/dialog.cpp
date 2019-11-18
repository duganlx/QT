#include "dialog.h"
#include <QPushButton>
#include <QIcon>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    toolBox = new QToolBox(this);
    QWidget *widget = new QWidget(toolBox);
    QIcon iconf1(":/img/friend1.ico");
    QPushButton *button1 = new QPushButton(iconf1, "Wind", widget);
    QIcon iconf2(":/img/friend2.ico");
    QPushButton *button2 = new QPushButton(iconf2, "Cake", widget);
    widget->setGeometry(0, 0, 40, 80);
    button1->setGeometry(5, 5, 120, 60);
    button2->setGeometry(5, 70, 120, 60);

    toolBox->addItem(widget, "Friend"); //向QToolBox中添加第一个抽屉，名为Friend
    QIcon iconFriend(":/img/friend.ico");
    toolBox->setItemIcon(0, iconFriend);    //设置第一个抽屉的图标

    QIcon iconLi(":/img/lisa.ico");
    QPushButton *buttonStrange = new QPushButton(iconLi, "lisa");
    toolBox->addItem(buttonStrange, "Stranger"); //向QToolBox中添加第二个抽屉，名为Stranger
    QIcon iconStrange(":/img/stranger.ico");
    toolBox->setItemIcon(1, iconStrange);   //设置第二个抽屉的图标
    toolBox->setGeometry(0, 0, 130, 200);
    this->resize(130, 200);
    this->setWindowTitle("QToolBoxDemo");
}

Dialog::~Dialog()
{

}
