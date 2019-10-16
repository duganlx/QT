/*
程序1．编写一个C++风格的程序，用动态分配空间的方法计算Fibonacci数列的前20项并存储到动态分配的空间中。

程序2．定义一个时间类Time，能提供和设置由时、分、秒组成的时间，并编写应用程序，定义时间对象，设置时间，
输出该对象提供的时间。

程序3．用new建立一个动态一维数组，并初始化int[10]={1,2,3,4,5,6,7,8,9,10},用指针输出，最后销毁数组所占空间。

程序4．编写一个C++风格的程序，解决百钱问题：将一元人民币兑换成1、2、5分的硬币，有多少种换法？

程序5．编写一个C++风格的程序，输入两个整数，将它们按由小到大的顺序输出。要求使用变量的引用。
*/ 
#include <iostream>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    void setTime(int hour, int minute, int second);
    void show(){
        cout<< hour<< ":"<< minute<< ":"<< second<< endl;
    }
};

void Time::setTime(int hour, int minute, int second){
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void compare(int &a, int &b){
    if(a>b){
        int c = a;
        a = b;
        b = c;
    }
}

int main(){
    /*
     * 程序一
     */
    int *Fibonacci = new int[20];
    Fibonacci[0]=1;
    Fibonacci[1]=1;

    for(int i=2;i<20;i++){
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    }
    for(int i=0;i<20;i++){
        cout << Fibonacci[i];
        if(i!=19){
            cout << "-";
        }else{
            cout << endl;
        }
    }

    delete Fibonacci;

    /*
     * 程序二 
     */
    Time *object = new Time;
    object->setTime(23, 59, 36);
    object->show();

    delete object;

    /*
     * 程序三 
     */
    int *arr = new int[10]{1,2,3,4,5,6,7,8,9,10};

    for(int i=0; i<10;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    delete arr;

    /*
     *  程序四 
     */
    for(int one_cent_num=0; one_cent_num<=100; one_cent_num++){
        for(int two_cent_num=0; two_cent_num<=50; two_cent_num++){
            for(int five_cent_num=0; five_cent_num<=20; five_cent_num++){
                if(one_cent_num + two_cent_num*2 + five_cent_num*5 == 100){
                    cout<<"the number of one cent:"<< one_cent_num;
                    cout<<",the number of two cent:"<< two_cent_num;
                    cout<<",the number of five cent:"<< five_cent_num;
                    cout<<endl;
                }
            }
        }
    }

    /*
     * 程序五 
     */
    int a, b;
    cout<<endl<<endl<<"pleace input two number:";
    cin>>a>>b;

    compare(a,b);
    cout<<a<<" "<<b;

    return 0;

}

