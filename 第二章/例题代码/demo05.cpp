//虚函数实现多态性
#include<iostream>

using namespace std;

class Shape
{
public:
	virtual void draw()
	{
		cout<<"Draw something."<<endl;
	} 
};

class Line : public Shape
{
public:
	virtual void draw()
	{
		cout<<"Draw a line."<<endl;
	}
};

class Circle : public Shape
{
public:
	void draw()
	{
		cout<<"Draw a circle."<<endl;
	}
};
 
int main()
{
	Shape *p, obj;
	Line L1;
	
	// 用Line类对象给Shape类对象赋值 
	obj = L1;
	obj.draw();
	
	// 以Line类对象初始化Shape类引用 
	Shape &p1 = L1;
	p1.draw();
	
	// 用Line类对象地址给基类指针赋值 
	p = &L1;
	p->draw();
	
	// 用Circle类对象地址给基类指针赋值
	p = new Circle;
	p->draw();
	
	return 0; 
}
