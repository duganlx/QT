#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    resize(300, 300);
    label = new MyLabel("0", this);
    btn = new QPushButton("Click Me", this);
    label->move(150, 150);
    btn->move(125, 110);

    connect(btn, SIGNAL(clicked()), label, SLOT(loopNum()));
}

Dialog::~Dialog()
{

}
