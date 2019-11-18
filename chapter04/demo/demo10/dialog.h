#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QProgressBar>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
private slots:
    void startProgress();   //槽函数声明
private:
    QLabel *fileNum;
    QProgressBar *progressBar;
    QPushButton *startBtn;
};

#endif // DIALOG_H
