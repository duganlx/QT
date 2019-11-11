#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "mylabel.h"
#include <QPushButton>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
private:
    MyLabel *label;
    QPushButton *btn;
};

#endif // DIALOG_H
