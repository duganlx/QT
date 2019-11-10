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

class Employee: private Person
{
private:	
	char m_strDept[20]; //工作部门 
	float m_fSalary;  //月薪 
public:
	Employee(){
		EmployeeRegister("xxx", 0, 'm', "xxx", 0);
	} 
	void EmployeeRegister(char* name, int age, char sex, char *dept, float salary);
	void ShowMe();
	void GetEmployeeName(char* name){
		GetName(name);
	}
	char GetEmployeeSex(){
		return GetSex();
	}
	int GetEmployeeAge(){
		return GetAge();
	}
};

void Employee::EmployeeRegister(char* name, int age, char sex, char *dept, float salary)
{
	Register(name, age, sex);
	strcpy(m_strDept, dept);
	m_fSalary = salary;
}

void Employee::ShowMe()
{
	char name[20];
	GetName(name);
	cout<<name<<"\t";
	cout<<GetAge()<<"\t";
	cout<<GetSex()<<"\t";	
	cout<<m_strDept<<"\t"<<m_fSalary<<endl;
}

int main()
{
	Employee emp;
	emp.EmployeeRegister("张三", 40, 'm', "图书馆", 2000);
	emp.ShowMe();
	char name[20];
	emp.GetEmployeeName(name);
	cout<<"调用GetEmployeeName()得到结果为："<<name<<"\n";
	cout<<"调用GetEmployeeSex()得到结果为："<<emp.GetEmployeeSex()<<"\n";
	cout<<"调用GetEmployeeAge()得到结果为："<<emp.GetEmployeeAge()<<"\n";
	
	return 0;
}
