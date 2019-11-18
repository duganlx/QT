#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    this->resize(320, 100);
    slider = new QSlider(Qt::Horizontal, this); //创建水平方向滑动条
    slider->setMinimum(0);
    slider->setMaximum(300);
    slider->setValue(50);
    slider->update();

    label = new QLabel(this);
    QFont font;
    font.setFamily(QStringLiteral("Arial"));
    font.setPointSize(14);
    label->setFont(font);
    label->setAlignment(Qt::AlignHCenter);  //垂直中央对齐
    label->setText("50");
    label->setGeometry(20, 20, 50, 25);
    slider->setGeometry(80, 25, 200, 20);

    connect(slider, SIGNAL(valueChanged(int)), this, SLOT(setLabelText(int)));
    this->setWindowTitle("QSliderDemo");
}

void Dialog::setLabelText(int pos)
{
    QString str = QString("%1").arg(pos);
    label->setText(str);
}

Dialog::~Dialog()
{

}
