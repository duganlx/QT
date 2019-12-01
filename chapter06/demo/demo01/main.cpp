#include "widget.h"
#include <QApplication>
#include <QSpinBox> //微调框
#include <QSlider>  //滑动条
#include <QLayout>  //布局类

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    //添加两个控件
    QSpinBox *spinBox = new QSpinBox(&w);   //创建数字旋钮
    QSlider *slider = new QSlider(Qt::Horizontal, &w);  //创建滑动条
    spinBox->setValue(35);
    slider->setValue(50);
    //创建布局对象,将控件加入其中
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    w.setLayout(layout);
    w.show();
    return a.exec();
}
