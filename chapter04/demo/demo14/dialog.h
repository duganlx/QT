#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTreeWidget>
#include <QTreeWidgetItem>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
public slots:
    void item_DblClicked(QTreeWidgetItem* item, int column);
private:
    QTreeWidget *tree;
};

#endif // DIALOG_H
