#include "widget.h"
#include <QApplication>
#include <QLabel>
#include <QImage>
#include <QDir>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    QLabel *pTag = new QLabel(&w); //创建标签
    //绝对路径
    //QImage image("C:/Users/ddu/Documents/AMy/c++/code/chapter04/demo/demo03/img.jpg");
    //相对路径
    QString curPath = QDir::currentPath();
    qDebug()<<curPath;
    QImage image("../demo03/img.jpg");

    pTag->setPixmap(QPixmap::fromImage(image)); //设置标签位图
    pTag->setGeometry(0, 0, image.width(), image.height());
    w.show();

    return a.exec();
}
