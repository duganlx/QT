#include<iostream>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
	Time(int hour, int minute, int second)
	{
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
    void display()
    {
    	cout<< hour<< ":"<< minute<< ":"<< second<< endl;
    }
    void settime(int h1, int m1, int s1)
	{
		this->hour = h1;
		this->minute = m1;
		this->second = s1;
	} 
};

int main(){
	
	Time *object = new Time(10,23,52);
	object->display();
    object->settime(23, 59, 36);
    object->display();

    delete object;
	
    return 0;
}
