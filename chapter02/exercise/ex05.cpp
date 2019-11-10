#include<iostream>

using namespace std;

class Vector
{
	int x, y, z;
public:
	Vector(int x, int y, int z):x(x), y(y), z(z){}
	Vector()
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vector operator + (Vector &v)
	{
		Vector temp;
		temp.x = x + v.x;
		temp.y = y + v.y;
		temp.z = z + v.z;
		
		return temp;
	}
	Vector operator - (Vector &v)
	{
		Vector temp;
		temp.x = x - v.x;
		temp.y = y - v.y;
		temp.z = z - v.z;
		
		return temp;
	}
	void show()
	{
		cout<<"第0个："<<x<<endl;
		cout<<"第1个："<<y<<endl;
		cout<<"第2个："<<z<<endl;
	}
};

int main()
{
	Vector v1(10, 20, 30), v2(9, 8, 7), v3;
	cout<<"v1"<<endl;
	v1.show();
	cout<<"v2"<<endl;
	v2.show();
	
	cout<<"v1-v2内容为"<<endl;
	v3=v1-v2;
	v3.show();
	
	cout<<"v1+v2内容为"<<endl;
	v3=v1+v2;
	v3.show();
	
	return 0;
}
