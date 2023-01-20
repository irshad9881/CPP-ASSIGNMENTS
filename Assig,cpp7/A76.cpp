#include<iostream>
using namespace std;
class Time 
{
  private:
  int h;
  int m;
  int s;
  public:
  Time()
  {

  }
  Time(int s)
  {
    //this ->s=s;
   m=s/60;
   s=s%60;
   h=m/60; 
   m=m%60;
  }
  void display()
  {
  
    cout<<"sec="<<s<<" min ="<<m<<" h="<<h<<endl;
  }

  };
  int main()
  {
    int duration;
    cout<<"Enter time is second:"<<endl;
    cin>>duration;
    Time t=duration;
    t.display();
    return 0;
  }