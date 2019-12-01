#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_newFile_triggered();

    void on_openFile_triggered();

    void on_saveFile_triggered();

    void on_cut_triggered();

    void on_copy_triggered();

    void on_paste_triggered();

    void on_color_triggered();

    void on_font_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
