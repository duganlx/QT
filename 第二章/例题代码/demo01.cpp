//人员(Person)类及其子类雇员类(Employee)的定义及使用
#include<iostream>
#include<cstring>

using namespace std;

class Person
{
private: 
	char m_strName[10]; //姓名  
	int m_nAge;  //年龄 
	int m_nSex;  //性别 
protected:
	void Register(char *name, int age, char sex)
	{
		strcpy(m_strName, name);
		m_nAge = age;
		m_nSex = (sex=='m'?0:1);
	}
public:
	void GetName(char *name){
		strcpy(name, m_strName);
	}
	char GetSex(){
		return m_nSex==0?'m':'f';
	}
	int GetAge(){
		return m_nAge;
	}
	void ShowMe(){
		char name[15];
		GetName(name);
		cout<<name<<"\t"<<GetSex()<<"\t"<<GetAge()<<"\t";
	}
};

class Employee: public Person
{
private:	
	char m_strDept[20]; //工作部门 
	float m_fSalary;  //月薪 
public:
	Employee(){
		Register("xxx", 0, 'm', "xxx", 0);
	}	
	void Register(char* name, int age, char sex, char* dept, float salary);
	void ShowMe();
};

void Employee::Register(char* name, int age, char sex, char* dept, float salary)
{
	Person::Register(name, age, sex);
	strcpy(m_strDept, dept);
	m_fSalary = salary;
}

void Employee::ShowMe()
{
	char name[15];
	GetName(name);
	cout<<name<<"\t"<<GetSex()<<"\t"<<GetAge()<<"\t";
	cout<<m_strDept<<"\t"<<m_fSalary<<endl;
}

int main()
{
	Employee emp;
	emp.ShowMe();
	emp.Register("ddu", 40, 'f', "图书馆", 2000);
	emp.ShowMe();
	cout<<"调用基类GetAge()返回值为："<<emp.GetAge()<<endl;
	return 0;
}
