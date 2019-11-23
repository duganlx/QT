#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>

namespace Ui {
class myDialog;
}

class myDialog : public QDialog
{
    Q_OBJECT

public:
    explicit myDialog(QWidget *parent = nullptr);
    ~myDialog();

signals:
    void sendData(QString, QString, QString, bool, bool);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::myDialog *ui;
};

#endif // MYDIALOG_H
