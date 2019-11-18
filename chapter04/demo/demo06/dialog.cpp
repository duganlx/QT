#include "dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    comBox = new QComboBox(this);
    comBox->setGeometry(20, 20, 100, 30);
    QIcon icon1(":/rc/ftp.ico");
    comBox->addItem(icon1, "ftp");  //设置图标和文字

    QIcon icon2(":/rc/www.ico");
    comBox->addItem("www");
    comBox->setItemIcon(1, icon2);
    connect(comBox, SIGNAL(currentIndexChanged(int)), this, SLOT(onChanged(int)));

    this->resize(200, 200);
    this->setWindowTitle("QComboBoxDemo");
}

void Dialog::onChanged(int index)
{
    QMessageBox::warning(this, "消息", comBox->itemText(index), QMessageBox::Ok);
}

Dialog::~Dialog()
{

}
