#include<iostream>
using namespace std;
class Time
{
    private:
    int hr;
    int min;
    int sec;
    public:
    void setTime(int a,int b,int c)
{
    hr=a;
    min=b;
    sec=c;
}
void showTime()
{
    cout<<hr<<":"<<min<<":"<<sec<<endl;
}
void normilize()
{ 
    min=min+sec/60;
    sec=sec%60;
    hr=hr+hr/60;
    min=min%60;
}
Time addTime(Time h)
{
    Time t;
    t.sec=sec+h.sec;
    t.min=min+h.min;
    t.hr=hr+h.hr;
    t.normilize();
    return t;
} 
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(10,20,30);
    t1.showTime();
    t2.setTime(10,20,30);
    t2.showTime();
    t3=t1.addTime(t2);
    t3.showTime();
    return 0;
}