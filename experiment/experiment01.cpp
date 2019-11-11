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

