#include<iostream>
#include<cstring>

using namespace std;

class Cellphone
{
private:
	char *brand;
	int telNum;
public:
	Cellphone(char *brand, int telNum):brand(brand), telNum(telNum){}
	void setBrand(char *brand)
	{
		strcpy(this->brand, brand);
	}
	void setTelNum(int telNum)
	{
		this->telNum = telNum;
	}
	void getBrand(char *res)
	{
		strcpy(res, brand);
	}
	int getTelNum()
	{
		return telNum;
	}
	void PickUp(int telNum)
	{
		cout<<"接到"<<telNum<<"打来的电话"<<endl;
	}
	void Callsomebody(int telNum)
	{
		cout<<"呼叫号码为"<<telNum<<"电话"<<endl;
	}
	void show()
	{
		cout<<"该手机品牌为"<<brand<<",号码为"<<telNum<<endl;
	} 
};

class Smartphone : public Cellphone
{
private:
	int storageCapacity, screenSize;	
public:
	Smartphone(char *brand, int telNum, int storageCapacity, int screenSize)
		:Cellphone(brand, telNum), storageCapacity(storageCapacity), screenSize(screenSize){}
	void setStorageCapacity()
	{
		this->storageCapacity = storageCapacity;
	}
	int getStorageCapacity()
	{
		return storageCapacity;
	}
	void setScreenSize()
	{
		this->screenSize = screenSize;
	}
	int getScreenSize()
	{
		return screenSize;
	}
	void PlayMusic(char *mName)
	{
		cout<<"播放音乐"<<mName<<endl;
	}
	void show()
	{
		char res[20];
		getBrand(res);
		cout<<"该手机品牌为"<<res<<",号码为"<<getTelNum();
		cout<<",存储容量为"<<storageCapacity<<",屏幕大小为"<<screenSize<<endl;
	}
};

int main()
{
	Cellphone p1("诺基亚", 10000);
	Smartphone p2("苹果", 10101, 500, 300);
	
	p1.show();
	p1.Callsomebody(10101);
	
	p2.show();
	p2.PickUp(10000);
	p2.PlayMusic("歌唱祖国");
	
	return 0;
	
}

