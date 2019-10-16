/*
姓名：吕翔
班级：17计算机科学与技术2班
学号：170201102778
内容：P26 习题1 2 
*/
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

class Ellipse
{
private:
    int x1,y1,x2,y2;
    
public:
    Ellipse(int xx1,int yy1,int xx2,int yy2)
	{
    	x1 = xx1; y1 = yy1; x2 = xx2; y2 = yy2;
	}
    
    double Area()
    {
    	return (double)( 3.1415 * fabs(x2-x1) * fabs(y2-y1) / 4 );
	}
	
    int GetX1(){return x1;}
    int GetY1(){return y1;}
    int GetX2(){return x2;}
    int GetY2(){return y2;}
};


int main()
{
    int x1,y1,x2,y2;
    cout<<"输入(x1,y1)和(x2,y2): ";
    cin >> x1 >> y1 >> x2 >> y2;
    Ellipse e(x1,y1,x2,y2);
    cout << e.GetX1() << " " << e.GetY1() << " " << e.GetX2() << " " << e.GetY2() << endl;
    cout << fixed << setprecision(4) << e.Area() << endl;
    return 0;
}

