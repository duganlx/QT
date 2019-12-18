#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>

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
    QLabel *ball;
    int flag; //方向标记
};

#endif // WIDGET_H
