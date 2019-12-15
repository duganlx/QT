#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT
    QPushButton *btn;
protected:
    void keyPressEvent(QKeyEvent *);    //添加事件处理函数
public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
