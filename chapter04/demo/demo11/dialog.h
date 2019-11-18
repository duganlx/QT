#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QToolBox>

class Dialog : public QDialog
{
    Q_OBJECT
    QToolBox *toolBox;
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
};

#endif // DIALOG_H
