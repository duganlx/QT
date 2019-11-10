#ifndef EXAMPLEA_H
#define EXAMPLEA_H

#endif // EXAMPLEA_H

#include <QCoreApplication>

class CExampleA : public QObject
{
    Q_OBJECT
public:
    CExampleA(){ m_Value=0; }
    void setValue(int nNewVal)
    {
        if(m_Value == nNewVal)
        {
            return;
        }
        m_Value = nNewVal;
        emit stateChanged(m_Value);
    }
signals:
    void stateChanged(int nNewVal);
private:
    int m_Value;
};
