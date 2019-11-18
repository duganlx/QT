#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_radioBtn1_clicked();

    void on_radioBtn2_clicked();

    void on_checkBox1_clicked();

    void on_checkBox2_clicked();

private:
    Ui::Widget *ui;

    void displayCheckBox();
};

#endif // WIDGET_H
