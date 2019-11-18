#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QSlider>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
public slots:
    void setLabelText(int pos); //槽函数
private:
    QLabel *label;
    QSlider *slider;
};

#endif // DIALOG_H
