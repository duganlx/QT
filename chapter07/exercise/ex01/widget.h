#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
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
    void mousePressEvent(QMouseEvent *e);
    void timerEvent(QTimerEvent *event);

private:
    Ui::Widget *ui;
    int timerId;
    int nextX, nextY;       //下一个位置x,y坐标
};

#endif // WIDGET_H
