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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *name;
    QLineEdit *age;
    QLabel *label_3;
    QRadioButton *male;
    QRadioButton *female;
    QLabel *label_4;
    QListWidget *Degrees;
    QLabel *label_5;
    QListWidget *Departments;
    QPushButton *addItem;
    QLabel *label_6;
    QListWidget *rosters;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(538, 378);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(23, 20, 61, 20));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(193, 20, 61, 21));
        name = new QLineEdit(Widget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(60, 20, 113, 20));
        age = new QLineEdit(Widget);
        age->setObjectName(QString::fromUtf8("age"));
        age->setGeometry(QRect(220, 20, 51, 20));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 20, 61, 20));
        male = new QRadioButton(Widget);
        male->setObjectName(QString::fromUtf8("male"));
        male->setGeometry(QRect(340, 20, 51, 21));
        female = new QRadioButton(Widget);
        female->setObjectName(QString::fromUtf8("female"));
        female->setGeometry(QRect(390, 20, 61, 21));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 60, 54, 21));
        Degrees = new QListWidget(Widget);
        Degrees->setObjectName(QString::fromUtf8("Degrees"));
        Degrees->setGeometry(QRect(70, 60, 101, 81));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 60, 81, 21));
        Departments = new QListWidget(Widget);
        Departments->setObjectName(QString::fromUtf8("Departments"));
        Departments->setGeometry(QRect(280, 60, 101, 81));
        addItem = new QPushButton(Widget);
        addItem->setObjectName(QString::fromUtf8("addItem"));
        addItem->setGeometry(QRect(190, 150, 75, 23));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 170, 61, 16));
        rosters = new QListWidget(Widget);
        rosters->setObjectName(QString::fromUtf8("rosters"));
        rosters->setGeometry(QRect(20, 190, 481, 151));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Name\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Age\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Gender\357\274\232", nullptr));
        male->setText(QCoreApplication::translate("Widget", "male", nullptr));
        female->setText(QCoreApplication::translate("Widget", "female", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Degree\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Department\357\274\232", nullptr));
        addItem->setText(QCoreApplication::translate("Widget", "Add Item", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Roster", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
