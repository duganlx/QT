#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QButtonGroup>

namespace Ui {
class addDialog;
}

class addDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addDialog(QWidget *parent = nullptr);
    ~addDialog();

private slots:
    void on_buttonBox_accepted();

signals:
    void sendData(QString, QString, QString);

private:
    Ui::addDialog *ui;
    QButtonGroup *genderGroup;
};

#endif // ADDDIALOG_H
