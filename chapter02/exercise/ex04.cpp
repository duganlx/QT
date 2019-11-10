#include<iostream>

using namespace std;

class Geometry
{
public:
	virtual void Draw()=0;
};

class Rect : public Geometry
{
private:
	int H, V;
public:
	Rect(int h, int v):H(h), V(v){}
	void show()
	{
		cout<<"矩形高为"<<H<<"，宽为"<<V<<endl;
	}
	virtual void Draw()
	{
		for(int h=0; h<H; h++)
		{
			for(int v=0; v<V; v++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
	}	
};

class IsoscelesRightAngle : public Geometry
{
private:
	int E;
public:
	IsoscelesRightAngle(int e):E(e){}
	void show()
	{
		cout<<"等腰直角三角形直角边为"<<E<<endl;
	}
	void Draw()
	{
		for(int i=0; i<E; i++)
		{
			for(int j=0; j<i+1; j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
	}
};

int main()
{
	Rect r(3,5);
	r.show();
	r.Draw();	
	
	IsoscelesRightAngle a(3);
	a.show();
	a.Draw();
	
	return 0;
}

