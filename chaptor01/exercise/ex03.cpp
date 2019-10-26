/*
姓名：吕翔
班级：17计算机科学与技术2班
学号：170201102778
内容：P26 习题1 3 
*/
#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

class Triangle
{
private:
	double a;
	double b;
	double c;
	
public:
	Triangle(double a, double b, double c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	
	~Triangle(){}
	
	double Area()
	{
		double p = 0.5*(a+b+c);
		return sqrt(p*(p-a)*(p-b)*(p-c));
	}
	
	void show()
	{
		cout<<"面积为 "<<Area()<<endl;
	}
	
	void judge();
	
};

void Triangle::judge()
{
	if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
		cout<<"该三角形是直角三角形"<<endl;
	else if(a*a+b*b<c*c || a*a+c*c<b*b || b*b+c*c<a*a)
		cout<<"该三角形是锐角三角形"<<endl;
	else if(a*a+b*b>c*c || a*a+c*c>b*b || b*b+c*c>a*a)
		cout<<"该三角形是钝角三角形"<<endl;
}

int main()
{
	int a,b,c;
	cout<<"请输入三角形三边：";
	cin>>a>>b>>c;
	Triangle tr1(a,b,c);
	tr1.judge();
	tr1.show();
	
	return 0;
}
