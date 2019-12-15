#include "dialog.h"
#include <QVBoxLayout>
#include <QTime>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    lcd = new QLCDNumber(); //创建一个QLCDNumber对象
    lcd->setDigitCount(10); //设置控件QLCDNumber能显示的位数
    lcd->setMode(QLCDNumber::Dec);  //设置显示模式为十进制
    lcd->setSegmentStyle(QLCDNumber::Flat); //设置显示方式

    timer = new QTimer;
    timer->setInterval(1000);   //设置每隔1秒发送一个timeout信号
    timer->start();             //启动定时器

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(lcd);
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimerOut()));

    this->setLayout(layout);    //设置窗口的布局管理器
    this->resize(200, 100);     //重新设置窗口的大小
    this->setWindowTitle("QTimerDemo");

}

void Dialog::onTimerOut()
{
    //获取系统当前时间
    QTime time = QTime::currentTime();
    //设置晶体管控件QLCDNumber上显示的内容
    lcd->display(time.toString("hh:mm:ss"));
}

Dialog::~Dialog()
{

}
