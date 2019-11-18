#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>

class Dialog : public QDialog
{
    Q_OBJECT
    //添加两个按钮指针
    QPushButton *pushButton1;
    QPushButton *pushButton2;

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
};

#endif // DIALOG_H
