#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    resize(300, 300);
    label = new QLabel("label", this);
    btn = new QPushButton("Click Me", this);
    label->move(150, 150);
    btn->move(125, 110);

    connect(btn, SIGNAL(clicked()), label, SLOT(close()));
}

Dialog::~Dialog()
{

}
