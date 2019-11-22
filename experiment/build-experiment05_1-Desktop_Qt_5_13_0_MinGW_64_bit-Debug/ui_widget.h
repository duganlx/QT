/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_1;
    QLabel *label_2;
    QLineEdit *originalStr;
    QLineEdit *aimSubStr;
    QPushButton *showSubStrButton;
    QPushButton *showLengthButton;
    QPushButton *indexOfSubStrButton;
    QPushButton *upperStrButton;
    QPushButton *addSubStrButton;
    QPushButton *compareLenButton;
    QLineEdit *addNum1;
    QLineEdit *addNum2;
    QPushButton *addButton;
    QLabel *label_3;
    QLabel *addResLabel;
    QLabel *showSubStrLabel;
    QLabel *showLengthLabel;
    QLabel *indexOfSubStrLabel;
    QLabel *upperStrLabel;
    QLabel *addSubStrLabel;
    QLabel *compareLenLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(484, 341);
        label_1 = new QLabel(Widget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(10, 20, 111, 21));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 71, 21));
        originalStr = new QLineEdit(Widget);
        originalStr->setObjectName(QString::fromUtf8("originalStr"));
        originalStr->setGeometry(QRect(130, 20, 191, 20));
        aimSubStr = new QLineEdit(Widget);
        aimSubStr->setObjectName(QString::fromUtf8("aimSubStr"));
        aimSubStr->setGeometry(QRect(90, 50, 231, 20));
        showSubStrButton = new QPushButton(Widget);
        showSubStrButton->setObjectName(QString::fromUtf8("showSubStrButton"));
        showSubStrButton->setGeometry(QRect(20, 90, 111, 23));
        showLengthButton = new QPushButton(Widget);
        showLengthButton->setObjectName(QString::fromUtf8("showLengthButton"));
        showLengthButton->setGeometry(QRect(20, 120, 111, 23));
        indexOfSubStrButton = new QPushButton(Widget);
        indexOfSubStrButton->setObjectName(QString::fromUtf8("indexOfSubStrButton"));
        indexOfSubStrButton->setGeometry(QRect(20, 150, 111, 23));
        upperStrButton = new QPushButton(Widget);
        upperStrButton->setObjectName(QString::fromUtf8("upperStrButton"));
        upperStrButton->setGeometry(QRect(20, 180, 111, 23));
        addSubStrButton = new QPushButton(Widget);
        addSubStrButton->setObjectName(QString::fromUtf8("addSubStrButton"));
        addSubStrButton->setGeometry(QRect(20, 210, 111, 23));
        compareLenButton = new QPushButton(Widget);
        compareLenButton->setObjectName(QString::fromUtf8("compareLenButton"));
        compareLenButton->setGeometry(QRect(20, 240, 111, 23));
        addNum1 = new QLineEdit(Widget);
        addNum1->setObjectName(QString::fromUtf8("addNum1"));
        addNum1->setGeometry(QRect(20, 290, 121, 20));
        addNum2 = new QLineEdit(Widget);
        addNum2->setObjectName(QString::fromUtf8("addNum2"));
        addNum2->setGeometry(QRect(200, 290, 113, 20));
        addButton = new QPushButton(Widget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(150, 290, 41, 23));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 290, 21, 16));
        addResLabel = new QLabel(Widget);
        addResLabel->setObjectName(QString::fromUtf8("addResLabel"));
        addResLabel->setGeometry(QRect(340, 290, 101, 16));
        showSubStrLabel = new QLabel(Widget);
        showSubStrLabel->setObjectName(QString::fromUtf8("showSubStrLabel"));
        showSubStrLabel->setGeometry(QRect(150, 90, 121, 21));
        showLengthLabel = new QLabel(Widget);
        showLengthLabel->setObjectName(QString::fromUtf8("showLengthLabel"));
        showLengthLabel->setGeometry(QRect(150, 122, 121, 20));
        indexOfSubStrLabel = new QLabel(Widget);
        indexOfSubStrLabel->setObjectName(QString::fromUtf8("indexOfSubStrLabel"));
        indexOfSubStrLabel->setGeometry(QRect(150, 150, 121, 20));
        upperStrLabel = new QLabel(Widget);
        upperStrLabel->setObjectName(QString::fromUtf8("upperStrLabel"));
        upperStrLabel->setGeometry(QRect(150, 180, 121, 20));
        addSubStrLabel = new QLabel(Widget);
        addSubStrLabel->setObjectName(QString::fromUtf8("addSubStrLabel"));
        addSubStrLabel->setGeometry(QRect(150, 210, 121, 20));
        compareLenLabel = new QLabel(Widget);
        compareLenLabel->setObjectName(QString::fromUtf8("compareLenLabel"));
        compareLenLabel->setGeometry(QRect(150, 240, 121, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_1->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\351\225\277\345\272\246\350\266\205\350\277\2076\347\232\204\344\270\262\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\255\220\344\270\262\357\274\232", nullptr));
        showSubStrButton->setText(QCoreApplication::translate("Widget", "mid(2,3)", nullptr));
        showLengthButton->setText(QCoreApplication::translate("Widget", "length()", nullptr));
        indexOfSubStrButton->setText(QCoreApplication::translate("Widget", "indexOf(\345\255\220\344\270\262)", nullptr));
        upperStrButton->setText(QCoreApplication::translate("Widget", "ToUpper()", nullptr));
        addSubStrButton->setText(QCoreApplication::translate("Widget", "+ \345\255\220\344\270\262", nullptr));
        compareLenButton->setText(QCoreApplication::translate("Widget", "\345\216\237\344\270\262 > \345\255\220\344\270\262 ?", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "=", nullptr));
        addResLabel->setText(QCoreApplication::translate("Widget", "res", nullptr));
        showSubStrLabel->setText(QCoreApplication::translate("Widget", "res", nullptr));
        showLengthLabel->setText(QCoreApplication::translate("Widget", "res", nullptr));
        indexOfSubStrLabel->setText(QCoreApplication::translate("Widget", "res", nullptr));
        upperStrLabel->setText(QCoreApplication::translate("Widget", "res", nullptr));
        addSubStrLabel->setText(QCoreApplication::translate("Widget", "res", nullptr));
        compareLenLabel->setText(QCoreApplication::translate("Widget", "res", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
