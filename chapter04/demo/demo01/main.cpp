#include "widget.h"
#include "QDebug"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    w.setGeometry(50, 50, 200, 200);
    qDebug()<<w.x()<<" "<<w.y();
    qDebug()<<w.geometry().width()<<" "<<w.frameGeometry().width();
    qDebug()<<w.geometry().height()<<" "<<w.frameGeometry().height();
    return a.exec(); //循环接受外部事件(鼠标键盘)
}
