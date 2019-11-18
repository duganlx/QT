#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QListWidget>

class Widget : public QWidget
{
    Q_OBJECT
private:
    QLabel *label;  //定义标签指针
    QListWidget *list;  //定义列表框指针
public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
