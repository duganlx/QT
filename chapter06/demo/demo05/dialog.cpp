#include "dialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QSlider>
#include <QLCDNumber>
#include <QDial>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QPushButton *m_QuitButton = new QPushButton("Quit", this);
    QLabel *m_CenLabel = new QLabel("Centigrade", this);
    QLabel *m_FahLabel = new QLabel("Fahrenheit", this);
    m_FahLabel->setAlignment(Qt::AlignHCenter);
    QLabel *m_Label = new QLabel("0", this);
    QSlider *m_Slider = new QSlider(this);
    QLCDNumber *m_LCDNumber = new QLCDNumber(this);
    QDial *m_Dial = new QDial(this);

    //将两个Label放到水平布局管理器(区域2)
    QHBoxLayout *layout2 = new QHBoxLayout;
    layout2->addWidget(m_CenLabel);
    layout2->addWidget(m_FahLabel);

    //将Label和Slider放到水平布局管理器(区域3)
    QHBoxLayout *layout3 = new QHBoxLayout;
    layout3->addWidget(m_Label);
    layout3->addWidget(m_Slider);

    //将LCDNumber和Dial放到垂直布局管理器(区域4)
    QVBoxLayout *layout4 = new QVBoxLayout;
    layout4->addWidget(m_LCDNumber);
    layout4->addWidget(m_Dial);

    //将区域3和区域4放到水平布局管理器(区域A)
    QHBoxLayout *layoutA = new QHBoxLayout;
    layoutA->addLayout(layout3);
    layoutA->addLayout(layout4);

    //将区域1、区域2、区域A放到主布局管理器
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(m_QuitButton);
    layout->addLayout(layout2);
    layout->addLayout(layoutA);
    layout->setSpacing(10);
    layout->setMargin(20);
    this->setLayout(layout);

}

Dialog::~Dialog()
{

}
