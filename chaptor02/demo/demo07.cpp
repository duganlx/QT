#include<iostream>

using namespace std;

class Complex
{
	double m_fReal, m_fImag;
public:
	Complex(double r=0, double i=0): m_fReal(r), m_fImag(i){}
	double Real()
	{
		return m_fReal;
	}
	double Imag()
	{
		return m_fImag;
	}
	Complex operator + (Complex&);
	Complex operator + (double);
	Complex operator = (Complex);
};

Complex Complex::operator + (Complex &c)
{
	Complex temp;
	temp.m_fReal = m_fReal + c.m_fReal;
	temp.m_fImag = m_fImag + c.m_fImag;
	return temp;
}

Complex Complex::operator + (double d)
{
	Complex temp;
	temp.m_fReal = m_fReal + d;
	temp.m_fImag = m_fImag;
	return temp;
}

Complex Complex::operator = (Complex c)
{
	m_fReal = c.m_fReal;
	m_fImag = c.m_fImag;
	return *this;
}

int main()
{
	Complex c1(3,4), c2(5,6), c3;
	cout<<"C1="<<c1.Real()<<"+j"<<c1.Imag()<<endl;
	cout<<"C2="<<c2.Real()<<"+j"<<c2.Imag()<<endl;
	c3=c1+c2;
	cout<<"C3="<<c3.Real()<<"+j"<<c3.Imag()<<endl;
	c3=c3+6.5;
	cout<<"C3="<<c3.Real()<<"+j"<<c3.Imag()<<endl;
	return 0;
}

