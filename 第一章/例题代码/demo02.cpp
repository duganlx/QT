//get函数返回私有变量指针有问题吗？ 
#include<iostream>
#include<cstring> 

using namespace std;

class Account
{
private:
	int ID; //账户ID 
	char Name[20]; //姓名 
	float balance; //余额 
public:
	void Initial(int ID, char Name[], float balance); //初始化 
	int withdraw(float m);  //取钱 
	void deposits(float m); //存钱
	
	char* getName(){
		return Name;
	} 
	 
	void setName(char* name){
		strcpy(Name, name);
	}
	
	void showMe(){
		cout<<Name<<" "<<balance<<endl;
	}
};

void Account::Initial(int ID, char Name[], float balance)
{
	this->ID = ID;
	strcpy(this->Name, Name);
	this->balance = balance;
}

int Account::withdraw(float m)
{
	if(balance>m){
		balance = balance - m;
		return 1;
	}else
		return 0;
}

void Account::deposits(float m)
{
	balance = balance + m;
}

int main()
{
	Account my;
	char name[] = "Jack";
	my.Initial(10112, name, 600.0);
	my.withdraw(500.0);
	my.showMe();
	
	char *p = my.getName(); //违反私有属性访问规则 
	strcpy(p, "abc");
	my.showMe();
	return 0;
}

