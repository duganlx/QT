#include "dialog.h"
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QSlider>
#include <QLCDNumber>   //LCD控件
#include <QDial>    //调温度的

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QPushButton *m_QuitButton = new QPushButton("Quit", this);
    QLabel *m_CenLabel = new QLabel("Centigrade", this);
    QLabel *m_FahLabel = new QLabel("Fahrenheit", this);
    m_FahLabel->setAlignment(Qt::AlignCenter);
    QLabel *m_Label = new QLabel("0", this);
    QSlider *m_Slider = new QSlider(this);
    QLCDNumber *m_LCDNumber = new QLCDNumber(this);
    QDial *m_Dial = new QDial(this);

    QGridLayout *layout = new QGridLayout(this);
    layout->setSpacing(10); //设置单元间隔
    layout->setMargin(20);  //设置边距

    //Quit按钮，起始于(0,0),横跨3个单元格,即colSpan=3
    layout->addWidget(m_QuitButton, 0, 0, 1, 3);
    //Centigrade标签,起始于(1,0),横跨2个单元格,即colSpan=2
    layout->addWidget(m_CenLabel, 1, 0, 1, 2);
    //Fahrenheit标签,起始于(1,2),占1个单元,不设rowSpan和colSpan
    layout->addWidget(m_FahLabel, 1, 2);
    //“0”这个Label，起始于(2, 0)，纵越2个单元格，rowSpan=2
    layout->addWidget(m_Label, 2, 0, 2, 1);
    //然后是Slider，起始于(2, 1)，纵越2个单元格，rowSpan=2
    layout->addWidget(m_Slider, 2, 1, 2, 1);
    //再然后是LCDNumber，它起始于(2, 2)，占用一个单元格
    layout->addWidget(m_LCDNumber, 2, 2);
    //最后是Dial表盘，它起始于(3, 2)占用一个单元格
    layout->addWidget(m_Dial, 3, 2);
    this->setLayout(layout);
}

Dialog::~Dialog()
{

}
