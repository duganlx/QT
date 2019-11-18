#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTabWidget>

class Dialog : public QDialog
{
    Q_OBJECT
    QTabWidget *tabWidget;

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
};

#endif // DIALOG_H
