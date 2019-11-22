#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QTextEdit>

class Widget : public QWidget
{
    Q_OBJECT
    //添加按钮和文本框控件的定义
    QPushButton * colorButton;
    QPushButton * fontButton;
    QTextEdit * edit;

public:
    Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void clickedColorButton();
    void clickedFontButton();
};

#endif // WIDGET_H
