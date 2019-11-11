#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    resize(150, 150);
    label = new QLabel(this);
    label->setText("Hello QT!");
    label->setGeometry(0, 0, 100, 100);
}

Dialog::~Dialog()
{

}
