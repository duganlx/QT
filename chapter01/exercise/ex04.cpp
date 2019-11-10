#include<iostream>

using namespace std;

class Rational
{
private:
	int top;
	int bottom;

public:
	Rational(int top, int bottom)
	{
		this->top = top;
		this->bottom = bottom;
	}
	
	void Add(Rational other)
	{
		top = other.top*bottom + other.bottom*top;
		bottom = bottom*other.bottom; 
	}
	
	void Sub(Rational other)
	{
		top = other.top*bottom - other.bottom*top;
		bottom = bottom*other.bottom; 
	}
	
	void Print()
	{
		cout<< top << "/" << bottom<<endl;
	}	
};


int main()
{
	int a,b,c,d;
	cout<<"输入a/b中的a,b的值：";
	cin>>a>>b;
	cout<<"输入c/d中的c,d的值：";
	cin>>c>>d;
	
	Rational t1(a,b);
	Rational t2(c,d);
	
	cout<<"a/b的值为";
	t1.Print();
	cout<<"a/b+c/d为";
	t1.Add(t2);
	t1.Print();
	cout<<"a/b-c/d为";
	t1.Sub(t2);
	t1.Print();
	return 0;
}
