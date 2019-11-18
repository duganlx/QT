#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QComboBox>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
public slots:
    void onChanged(int index);  //定义槽函数
private:
    QComboBox *comBox;  //定义组合框指针
};

#endif // DIALOG_H
