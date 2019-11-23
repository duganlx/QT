#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void setting();
    void receiveData(QString, QString, QString, bool, bool);

private:
    QAction *setAction;
    QLabel *label;
};

#endif // MAINWINDOW_H
