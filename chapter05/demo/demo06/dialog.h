#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
    QPushButton *btn;
    QPushButton *btn1;
    QPushButton *btn2;
public slots:
    void slotOpenFileDlg();     //启动文件选择对话框
    void slotOpenColorDlg();    //启动颜色对话框
    void slotOpenFontDlg();     //启动字体选择对话框
};

#endif // DIALOG_H
