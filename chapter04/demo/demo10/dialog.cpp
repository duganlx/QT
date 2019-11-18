#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("Progress"));
    fileNum = new QLabel(this);
    fileNum->setText(tr("复制文件数目：0"));
    fileNum->setGeometry(20, 10, 200, 18);

    progressBar = new QProgressBar(this);
    progressBar->setGeometry(20, 35, 200, 10);

    startBtn = new QPushButton(this);
    startBtn->setText(tr("开始"));
    startBtn->setGeometry(20, 55, 80, 30);

    connect(startBtn, SIGNAL(clicked()), this, SLOT(startProgress()));
}

void Dialog::startProgress()
{
    progressBar->setRange(0, 1000);
    for (int i=1; i<=1000; i++) {
        progressBar->setValue(i);
        QString str = QString("%1").arg(i);
        str = "复制文件数目："+str;
        fileNum->setText(str);
    }
}

Dialog::~Dialog()
{

}
