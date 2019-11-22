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
    void on_showSubStrButton_clicked();

    void on_showLengthButton_clicked();

    void on_compareLenButton_clicked();

    void on_indexOfSubStrButton_clicked();

    void on_upperStrButton_clicked();

    void on_addSubStrButton_clicked();

    void on_addButton_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
