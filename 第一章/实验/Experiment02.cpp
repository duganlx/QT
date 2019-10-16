/*
程序1．采用函数重载编写一个程序，分别求出两个整数、三个整数、两个单精度数、三个单精度数的最大值。

程序2．声明一个时间类，时间类中有3个私有数据成员（hour,minute和second）和2个公有成员函数（SetTime()和Print_Time())。
SetTime()根据传递的3个参数为对象设置时间；Print_Time()负责将对象表示的时间显示输出。
在主函数中，建立一个时间类的对象，设置时间为9点20分30秒并显示该时间。
使用构造函数代替上面的SetTime()成员函数，并在主函数中使用构造函数设置时间为10点40分50秒，显示该时间。

程序3．建立类cylinder，cylinder的构造函数被传递了两个double值，分别表示圆柱体的半径和高度。用类cylinder的成员函数计算圆柱的体积，
并存储在一个double变量中。在类cylinder中包含一个成员函数vol，用来显示每个cylinder对象的体积。在主函数中，建立一个cylinder类的对象，
测试该类。

程序4．声明一个日期类，日期的属性有年、月和日。方法有构造函数、析构函数、日期的显示。要求使用构造函数的重载，
分别定义无参构造函数(使年月日的值分别为2013、1、1)和有参构造函数，并编写程序测试日期类。

程序5．创建一个Employee类，该类中有字符数组，表示姓名、街道地址、市、省和邮政编码。把表示构造函数、ChangeName（）、Display（）函数
原型放在类定义中，构造函数和成员函数在类外定义，构造函数初始化每个成员，Display（）函数把完整的对象打印出来。
其中数据成员是保护的，函数是公共的。编写一个主程序定义一个Employee类对象并初始化，调用Display（）显示对象的信息。

*/
#include<iostream>
#include<string.h>

using namespace std;

/* 程序1 */
int max(int x, int y)
{
	return x>y?x:y;
}

int max(int x, int y, int z)
{
	int temp = x>y?x:y;
	return temp>z?temp:z;
}

float max(float x, float y)
{
	return x>y?x:y;
}

float max(float x, float y, float z)
{
	double temp = x>y?x:y;
	return temp>z?temp:z;
}

/* 程序2 */ 
class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time(int hour, int minute, int second)
    {
    	this->hour = hour;
		this->minute = minute;
		this->second = second;	
    }
    
	void Print_Time()
	{
        cout<< hour<< ":"<< minute<< ":"<< second<< endl;
    }
};

/* 程序3 */
class Cylinder
{
private:
	double vol;

public:
	Cylinder(double r, double h)
	{
		this->vol = 3.14*r*r*h;
	}	
	
	~Cylinder()
	{
		cout<<"deconstrucor of Cylinder"<<endl;
	}
	
	void Print_vol()
	{
        cout<<"圆柱体积为："<< vol << endl;
    }
}; 

/* 程序4 */
class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date(){}
	
	Date(int year, int month, int day)
	{
		this->year = year;
		this->month = month;
		this->day = day;
	}
	
	void Print_Date()
	{
        cout<< year<< "/"<< month<< "/"<< day<< endl;
    }
};

/* 程序5 */
class Employee
{
private:
	char name[20];
	char addr[40];
	char city[20];
	char state[20];
	char zip[10];
	
public:
	Employee(char* name, char* addr, char* city, char* state, char* zip);

	void ChangeName(char* name)
	{
		strcpy(this->name, name);
	}
	
	void Display()
	{
		cout<<"姓名为 "<<name<<endl;
		cout<<"地址为 "<<addr<<endl;
		cout<<"城市为 "<<city<<endl;
		cout<<"省为 "<<state<<endl;
		cout<<"邮政编码为 "<<zip<<endl;
	}
	
};

Employee::Employee(char* name, char* addr, char* city, char* state, char* zip)
{
	strcpy(this->name, name);
	strcpy(this->addr, addr);
	strcpy(this->city, city);
	strcpy(this->state, state);
	strcpy(this->zip, zip);
}

int main()
{

	/* 程序1 */ 
	
	int a, b, c;
	float d, e, f;
	cout<<"输入两个整数：";
	cin>>a>>b;
	cout<<"最大值为："<<max(a,b)<<endl; 
	
	cout<<"输入三个整数：";
	cin>>a>>b>>c;
	cout<<"最大值为："<<max(a,b,c)<<endl; 
	
	cout<<"输入两个单精度数：";
	cin>>d>>e;
	cout<<"最大值为："<<max(d,e)<<endl; 
	
	cout<<"输入三个单精度数：";
	cin>>d>>e>>f;
	cout<<"最大值为："<<max(d,e,f)<<endl; 
		
		
	/* 程序2 */ 
	Time time = Time(12,30,45);
	time.Print_Time();
	
	/* 程序3 */
	Cylinder cylinder = Cylinder(3,5);
	cylinder.Print_vol();

	
	/* 程序4 */ 
	Date date = Date(2019,10,9);
	date.Print_Date();
	
	/* 程序5 */ 
	char name[20] = "张三";
	char addr[40] = "香洲区";
	char city[20] = "珠海市";
	char state[20] = "广东省";
	char zip[10] = "518000";
	
	Employee employee = Employee(name, addr, city, state, zip);
	employee.Display();

	
	return 0;
}
