#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QMouseEvent>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void mousePressEvent(QMouseEvent *ev);
    void timerEvent(QTimerEvent *event);    //事件响应函数
    int generateRandomNumber(int max);

private:
    Ui::Widget *ui;
    int timerId;  //存储定时器编号
};

#endif // WIDGET_H
