#ifndef EXAMPLEB_H
#define EXAMPLEB_H

#endif // EXAMPLEB_H

#include <QDebug>
#include <QCoreApplication>

class CExampleB : public QObject
{
    Q_OBJECT
public:
    CExampleB(){}
public slots:
    void Function(int nNewVal)
    {
        qDebug() << "new Values=" <<nNewVal;
    }
};
