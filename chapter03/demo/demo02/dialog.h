#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>

class Dialog : public QDialog
{
    Q_OBJECT //宏定义：启动QT5元对象的一些新特性，如信号与槽
    QLabel * label;

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
};

#endif // DIALOG_H
