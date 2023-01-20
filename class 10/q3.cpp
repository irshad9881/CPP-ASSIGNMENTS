#include<iostream>
using namespace std;
class Time
{
     private:
     int h;
     int m;
     public:
     Time()
     {

     }
    Time(int x,int y)
    {
        h=x;
        m=y;
    }
    void show()
    {
        cout<<"hour ="<<h<<" min" <<m<<endl;
    }
    int operator >(Time t)
    {
        if(h>t.h)
        {
            return 1;
        }
        else if(h==t.m)
        {
            if(m>t.m)
            {
                return 1;
            }
            return 0;
        }
        return 0;
    }
};
int  main()
{
    Time t1(10,20),t2(20,30);
    if(t1>t2)
    {
        cout<<"Hello google :"<<endl;
    }
    else
    {
        cout<<"Hello amazon:"<<endl;
    }
    return 0;
}
