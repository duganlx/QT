#include <QApplication>
#include <QDialog>  //使用对话框类
#include <QLabel>   //使用标签类

int main(int argc, char * argv[])   //用来接收命令行参数
{
    QApplication a(argc, argv); //用于管理应用程序的各种设置，并执行事件处理工作
    QDialog w;  //对话框界面
    QLabel label(&w);   //对话框w是它的父窗口
    label.setText("Hello QT!");
    label.setGeometry(10, 10, 100, 100);
    w.show();
    return a.exec();    //让QApplication对象进入事件循环
}
