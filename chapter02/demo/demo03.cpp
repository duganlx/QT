#include<iostream>
#include<cstring>

using namespace std; 

class Person
{
private:
	char m_strName[10]; //姓名
	int m_nAge; //年龄 
public:
	Person(char* name, int age)
	{
		strcpy(m_strName, name);
		m_nAge = age;
		cout<<"constructor of person"<<m_strName<<endl;
	}
	~Person()
	{
		cout<<"deconstructor of person"<<m_strName<<endl;
	}
};

class Employee : public Person
{
private:
	char m_strDept[20];
	Person Wang;
public:
	Employee(char* name, int age, char* dept, char* name1, int age1)
		: Person(name, age), Wang(name1, age1)
	{
		strcpy(m_strDept, dept);
		cout<<"constructor of Employee"<<endl;
	}
	~Employee()
	{
		cout<<"deconstructor of Employee"<<endl;
	}
};

int main()
{
	Employee emp("张三", 40, "人事处", "王五", 36);
	return 0;
}
