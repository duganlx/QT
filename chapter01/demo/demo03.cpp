#include<iostream>
#include<cstring> 

using namespace std;

class Account
{
private:
	int ID; //’ÀªßID 
	char Name[20]; //–’√˚ 
	float balance; //”‡∂Ó 
public:
	Account();
	Account(int ID, char Name[], float balance);
	Account(Account &other);
	
	int withdraw(float m);  //»°«Æ 
	void deposits(float m); //¥Ê«Æ
	
	int getID(){
		return ID;
	}
	
	void setID(int id){
		ID = id;
	}
	
	float getBalance(){
		return balance;
	}
	
	void setBalance(float amount){
		balance = amount;
	}
	
	char* getName(char* res){
		strcpy(res, Name);
	} 
	 
	void setName(char* name){
		strcpy(Name, name);
	}
	
	void showMe(){
		cout<<Name<<" "<<balance<<endl;
	}
};

Account::Account()
{
	this->ID = -1;
	strcpy(this->Name, "xxx");
	this->balance = 0.0;
}

Account::Account(int ID, char Name[], float balance)
{
	this->ID = ID;
	strcpy(this->Name, Name);
	this->balance = balance;
}

Account::Account(Account &other)
{
	this->ID = other.ID;
	strcpy(this->Name, other.Name);
	this->balance = other.balance;
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
	char name[] = "Jack";
	Account my(10112, name, 600.0);
	my.showMe();
	my.withdraw(500.0);
	my.showMe();
	
	Account other(my);
	other.showMe();
	
	Account other2;
	other2.showMe();
	other2.setID(11266);
	other2.setName("ddu");
	other2.setBalance(500.);
	other2.showMe();
	return 0;
}
