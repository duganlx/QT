#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTreeWidgetItem>
#include <QTableWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void disk_change(QTreeWidgetItem* item, int column);

private:
    Ui::Widget *ui;
    void wrapTableWidgetItem(QTableWidget *tableWidge,int row, QString name, QString updateDate, QString type, QString size);
};

#endif // WIDGET_H
