#include "widget.h"
#include <QColorDialog>
#include <QFontDialog>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //创建color按钮和font按钮
    colorButton = new QPushButton("color", this);
    fontButton = new QPushButton("font", this);
    edit = new QTextEdit(this);

    colorButton->setGeometry(30, 30, 80, 30);
    fontButton->setGeometry(120, 30, 80, 30);
    edit->setGeometry(30, 80, 220, 150);

    //建立关联
    connect(colorButton, SIGNAL(clicked()), this, SLOT(clickedColorButton()));
    connect(fontButton, SIGNAL(clicked()), this, SLOT(clickedFontButton()));
}

void Widget::clickedColorButton()
{
    QColorDialog * colorDialog = new QColorDialog(this);
    colorDialog->setCurrentColor(QColor(Qt::black));
    if(QDialog::Accepted == colorDialog->exec())
        edit->setTextColor(colorDialog->currentColor());
}

void Widget::clickedFontButton()
{
    QFontDialog * fontDialog = new QFontDialog(this);
    fontDialog->setCurrentFont(edit->font());
    if(QDialog::Accepted == fontDialog->exec())
        edit->setCurrentFont(fontDialog->currentFont());
}

Widget::~Widget()
{

}
