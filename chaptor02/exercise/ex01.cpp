#include<iostream>

using namespace std;

class Point
{
private:
	int x, y, z;
public:
	Point(int x, int y, int z):x(x),y(y),z(z){}
	void Show()
	{
		cout<<x<<" "<<y<<" "<<z<<" ";
	}
};

class ColorPt : public Point
{
private:
	char *color;
public:
	ColorPt(int x, int y, int z, char *color):Point(x, y, z),color(color){}
	void Show()
	{
		Point::Show();
		cout<<color<<" ";
	}
};

int main()
{
	Point z(2,3,5);
	z.Show(); 
	cout<<endl;
	
	ColorPt t(10,20,30,"red");
	t.Show();
	cout<<endl;
	
	return 0;
}

