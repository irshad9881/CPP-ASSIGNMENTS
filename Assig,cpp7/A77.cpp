#include<iostream>
using namespace std;
class Time
{
  private:
  int sec;
  int min;
  int hour;
  public:
  Time()
  {

  }
  Time(int h,int m,int s)
  { 
    hour=h;
    min=m;
    sec=s;
  }
  void setdata(int h,int m,int s)
  {
     min=min+sec/60;
     sec=sec%60;
     hour=hour+min/60;
     min=min%60;
  }
  void display()
  {
    cout<<"Hour= "<<hour<<" Min="<<min<<" sec ="<<sec<<endl;
  } 
  int getA()
  {
    return hour;
  }
  int getB()
  {
    return min;
  }
  int getC()
  {
    return sec;
  }
};
  class Min
{
 private:
 int min;
 public:
 Min()
 {

 }
 Min(int m)
 {
   min=m;
 }
 void display()
 {
    cout<<"min="<<min<<endl;
 }
  Min(Time t)
{
    min=t.getB();
}
};

int main()
{
    Time t1(2,30,0);
     t1.display();
     Min m1;
     m1.display();
     m1=t1;
     //t1.display();
     m1.display();
     return 0;
}
