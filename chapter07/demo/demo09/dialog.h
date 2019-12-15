#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLCDNumber>
#include <QTimer>

class Dialog : public QDialog
{
    Q_OBJECT
public slots:
    void onTimerOut();  //槽函数
private:
    QLCDNumber *lcd;    //液晶显示控件
    QTimer *timer;      //定时器
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
};

#endif // DIALOG_H
