#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
protected:
    void timerEvent(QTimerEvent *event);    //事件响应函数
    int timerId;    //存储定时器编号
    int count;      //计数器
public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_startBtn_clicked();

    void on_stopBtn_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
