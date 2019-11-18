#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    resize(150, 150);   //设置主窗体大小
    pushButton1 = new QPushButton(this);    //新建按钮
    QIcon icon1(":/rc/play.ico");
    pushButton1->setIcon(icon1);
    pushButton1->setGeometry(20, 20, 70, 40);

    pushButton2 = new QPushButton(this);
    QIcon icon2(":/rc/open.ico");
    pushButton2->setIcon(icon2);
    pushButton2->setFlat(true); //将按钮设置为平面
    pushButton2->setText("Open");   //设置按钮的文本信息
    pushButton2->setGeometry(20, 70, 70, 40);
    pushButton2->setCheckable(true); //两种按钮状态，按一次按钮下压，再按一次按钮恢复

}

Dialog::~Dialog()
{

}
