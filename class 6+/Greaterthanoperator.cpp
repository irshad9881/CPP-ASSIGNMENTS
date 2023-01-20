#include<iostream>
using namespace std;
class Time 
{
  private:
  int Hour ;
  int min;
  public:
  Time()
  {

  }
  Time(int x,int y)
  { 
    Hour=x;
    min=y;
  }
void setdata(int x,int y)
  {
    Hour=x;
    min=y;
  }
  int operator >(Time t)
  { 
    if(Hour>t.Hour)
    {
        return 1;
    }
    else
    {
        if(Hour==t.Hour)
        {
            if(min>t.min)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        return 0;
    }
    
  }
  void show()
  {
    cout<<"Hour="<<Hour<<" Min="<<min<<endl;
  }
};
int main()
{
    Time t1,t2;
    t1.setdata(10,20);
    t2.setdata(10,30);
     if(t1>t2)
     { 
        cout<<"Hello Amazon:"<<endl;
     }
     else
     {
        cout<<"Hello Gollege:"<<endl;
     }
    t1.show();
    t2.show();
    return 0;
}