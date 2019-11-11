#ifndef MYLABEL_H
#define MYLABEL_H

#endif // MYLABEL_H

#include <QLabel>

class MyLabel : public QLabel
{
    Q_OBJECT
public:
    MyLabel(const QString &text, QWidget *parent=0)
        : QLabel(text, parent){}
    ~MyLabel(){}
public slots:
    void loopNum()
    {
        QString str = this->text();
        int n = str.toInt();
        n = (n+1)%4;
        QString newStr = QString::number(n);
        this->setText(newStr);
        this->adjustSize(); //自适应调整标签的大小
    }
};
