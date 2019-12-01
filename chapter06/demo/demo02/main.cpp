#include "widget.h"
#include <QApplication>
#include <QLineEdit>
#include <QTextEdit>
#include <QLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    //创建两个控件
    QLineEdit *lEdit = new QLineEdit("a line text", &w);
    QTextEdit *rEdit = new QTextEdit(&w);
    //将控件放入layout对象
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(lEdit);
    layout->addWidget(rEdit);
    w.setLayout(layout);    //设置窗体布局
    w.show();
    return a.exec();
}
