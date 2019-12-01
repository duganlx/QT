#include "dialog.h"
#include <QFileDialog>
#include <QColorDialog>
#include <QFontDialog>
#include <QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    resize(200, 150);
    btn = new QPushButton("File Dialog", this);
    connect(btn, SIGNAL(clicked()), this, SLOT(slotOpenFileDig()));

    btn1 = new QPushButton("Color Dialog", this);
    btn1->move(0, 30);
    connect(btn1, SIGNAL(clicked()), this, SLOT(slotOpenColorDig()));

    btn2 = new QPushButton("Font", this);
    btn2->setGeometry(0, 60, 50, 50);
    connect(btn2, SIGNAL(clicked()), this, SLOT(slotOpenFontDlg()));
}

void Dialog::slotOpenFileDlg()
{
    QString s= QFileDialog::getOpenFileName(
                this,
                "open file dialog", //对话框标题
                "/",                //默认选中文件
                "C++ files(*.cpp);;C files(*.c);;Head files(*.h)"); //文件过滤
    qDebug()<<s;
}

void Dialog::slotOpenColorDlg()
{
    QColor color = QColorDialog::getColor(Qt::blue);
    if(color.isValid())
    {
        int r, g, b;
        color.getRgb(&r, &g, &b);
        qDebug()<<r<<" "<<g<<" "<<b;
    }
}

void Dialog::slotOpenFontDlg()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok);
    if(ok)
    {
        btn2->setFont(font);    //修改按钮字体
    }
}

Dialog::~Dialog()
{

}
