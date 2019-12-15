#include "mainwindow.h"
#include <QApplication>
#include <QSplitter>
#include <QTextEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //创建3个编辑框
    QTextEdit *editor1 = new QTextEdit;
    QTextEdit *editor2 = new QTextEdit;
    QTextEdit *editor3 = new QTextEdit;
    //定义一个切分窗口
    QSplitter splitter(Qt::Horizontal);

    //将文件控件加入到切分框
    splitter.addWidget(editor1);
    splitter.addWidget(editor2);
    splitter.addWidget(editor3);

    //设置内容
    editor1->setPlainText("One\nTwo\nThree");
    editor2->setPlainText("1 \n 2\n3 ");
    editor3->setPlainText("A\nB\nC");
    splitter.setWindowTitle(QObject::tr("Splitter"));

    splitter.show();
    return a.exec();
}
