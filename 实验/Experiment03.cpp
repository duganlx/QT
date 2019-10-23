/*
程序1．编写一个学生和教师数据输入和显示程序，学生数据有编号、姓名、班号和成绩，
教师数据有编号、姓名、职称和部门。要求将编号、姓名输入和显示设计成一个类person，
并作为学生数据操作类student和教师数据操作类teacher的基类。

程序2．设计一个楼房基类building，属性有floors（表示楼房层数）、areas（表示建筑面积）和name（表示建筑名称）。
建立派生类house表示居住楼，增加成员ds表示单元数。建立派生类office表示办公楼，增加成员cs表示公司数。
为每个类定义一个输出函数print，输出该类的相关信息。

程序3．定义点类，然后由点类生成圆类，再由圆类生成圆柱体类。圆类的属性有圆心、半径；方法有构造函数、
析构函数、显示、计算面积。圆柱体类的新增属性有高度；方法有构造函数、析构函数、显示、计算体积。
类的应用：创建一个圆柱体对象，显示其信息，求它的体积。

程序4．设计以下三个类：显卡类、主板类、集成了显卡的集成主板类。对这三个类的描述如下：
 	显卡类：CPU频率、显存频率。
 	主板类：北桥芯片类型、版型。
 	集成主板类：CPU频率、显存频率、北桥芯片类型、版型。
每个类都有自己的构造函数和析构函数，构造函数通过给定的初始值生成对应类的对象。同时这三个类都
能显示其数据成员的值。
要求：通过类的多继承完成集成主板类的设计
*/ 
#include<iostream>
#include<cstring>

using namespace std;

/*
 程序1
*/ 
class Person
{
private:
	int id;
	char name[10];
public:
	Person(int id, char* name)
	{
		this->id = id;
		strcpy(this->name, name);
	}
	
	int getId()
	{
		return id;
	}
	
	void getName(char* res)
	{
		strcpy(res, name);
	}
	
	void display()
	{
		cout<<"id:"<<id<<" ";
		cout<<"name:"<<name<<" ";
	}
};
class Student : public Person
{
private:
	int clazzId;
	int grate;
public:
	Student(int id, char* name, int clazzId, int grate)
		: Person(id, name)
	{
		this->clazzId = clazzId;
		this->grate = grate;
	} 
	
	void display()
	{
		Person::display();
		cout<<"clazzId:"<<clazzId<<" ";
		cout<<"grate:"<<grate<<endl;	
	}
};
class Teacher : public Person
{
private:
	char position[15];
	char dept[15];
public:
	Teacher(int id, char* name, char* position, char* dept)
		: Person(id, name)
	{
		strcpy(this->position, position);
		strcpy(this->dept, dept);
	}
	
	void display()
	{
		Person::display();
		cout<<"position:"<<position<<" ";
		cout<<"dept:"<<dept<<endl;	
	}
};

/*
 程序2 
*/ 
class Building
{
private:
	int floor; //楼房层数 
	int areas; //建筑面积 
	char name[20]; //建筑名称
public:
	 Building(int floor, int areas, char* name)
	 {
	 	this->floor = floor;
	 	this->areas = areas;
	 	strcpy(this->name, name);
	 }
	 
	 void print()
	 {
	 	cout<<"楼房层数："<<floor<<" ";
	 	cout<<"建筑面积"<<areas<<" ";
	 	cout<<"建筑名称："<<name<<" ";
	 }
};
class House : public Building
{
private:
	int ds; //单元数
public:
	House(int floor, int areas, char* name, int ds)
		: Building(floor, areas, name)
	{
		this->ds = ds;
	} 
	
	void print()
	{
		Building::print();
		cout<<"单元数："<<ds<<endl;
	}
};
class Office : public Building
{
private:
	int cs; //单元数
public:
	Office(int floor, int areas, char* name, int cs)
		: Building(floor, areas, name)
	{
		this->cs = cs;
	} 
	
	void print()
	{
		Building::print();
		cout<<"公司数："<<cs<<endl;
	}
};

/*
 程序3
*/ 
class Spot
{
private:
	int x;
	int y;
public:
	Spot(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	~Spot()
	{
		cout<<"deconstrucor of Spot"<<endl;
	}
	
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
};
class Circle
{
private:
	Spot center;
	int radius;
public:
	Circle(int xCenter, int yCenter, int radius)
		: center(xCenter, yCenter)
	{
		this->radius = radius;
	}
	
	~Circle()
	{
		cout<<"deconstrucor of Circle"<<endl;
	}
	
	int getRadius()
	{
		return radius;
	}
	
	void display()
	{
		cout<<"圆心坐标为("<<center.getX()<<","<<center.getY()<<"),半径为"<<radius<<" ";
	}
	
};
class Cylinder : public Circle
{
	int height;
public:
	Cylinder(int xCenter, int yCenter, int radius, int height)
		: Circle(xCenter, yCenter, radius)
	{
		this->height = height;	
	}
	~Cylinder()
	{
		cout<<"deconstrucor of Cylinder"<<endl;
	}
	
	void display()
	{
		Circle::display();
		cout<<"高为"<<height<<" ";
		cout<<"体积为"<<getVol()<<endl;
	}
	
	double getVol()
	{
		return 3.14*getRadius()*getRadius()*height;
	}
};

/*
 程序4 
*/
class GCard
{
	int cpuHz;
	int VMHz;
public:
	GCard(int cpuHz, int VMHz)
	{
		this->cpuHz = cpuHz;
		this->VMHz = VMHz;
	}
	~GCard()
	{
		cout<<"deconstrucor of GCard"<<endl;
	}
	void display()
	{
		cout<<"CPU频率为"<<cpuHz<<" ,显存频率为"<<VMHz<<" ";
	}
}; 
class MainBoard
{
	int NBChip;
	int version;
public:
	MainBoard(int NBChip, int version)
	{
		this->NBChip = NBChip;
		this->version = version;
	}
	~MainBoard()
	{
		cout<<"deconstrucor of MainBoard"<<endl;
	}
	void display()
	{
		cout<<"北桥芯片类型为"<<NBChip<<" ,版型为"<<version<<" ";
	} 
};
class IntegratedMB : public GCard, public MainBoard
{
public:
	IntegratedMB(int cpuHz, int VMHz, int NBChip, int version)
		: GCard(cpuHz, VMHz), MainBoard(NBChip, version)
	{
		
	}
	~IntegratedMB()
	{
		cout<<"deconstrucor of IntegratedMB"<<endl;	
	}
	void display()
	{
		GCard::display();
		MainBoard::display();
		cout<<endl;
	}
};

int main()
{
	/*
	 程序1 
	*/
	Student *student = new Student(1, "ddu", 20, 100);
	student->display();
	delete student;
	
	Teacher *teacher = new Teacher(2, "张三", "讲师", "教学部");
	teacher->display();
	delete teacher; 
	
	/*
	 程序2 
	*/
	House *house = new House(3, 160, "ddu的小屋", 20);
	house->print(); 
	delete house;
	
	Office *office = new Office(40, 300, "ddu的办公室", 150);
	office->print(); 
	delete office;
	
	/*
	 程序3 
	*/
	Cylinder *cylinder = new Cylinder(1, 2, 3, 4);
	cylinder->display();
	delete cylinder;
	
	/*
	 程序4 
	*/
	 IntegratedMB *IMG = new IntegratedMB(120000, 80000, 2, 1);
	 IMG->display();
	 delete IMG;
	
	return 0;
}


