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
