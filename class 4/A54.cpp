#include<iostream>
using namespace std;
class Time //new data type
{
  private:
  int hr,min,sec;
  public:
  Time()
  {
   hr=min=sec=0;
  }
  friend int operator>>(istream &input,Time &t)
  {
  cout<<"Enter hr:"<<endl;
  input>>t.hr;
  cout<<"Enter min:"<<endl;
  input>>t.min;
  cout<<"Enter sec:"<<endl;
  input>>t.sec;
  t.min=t.min+t.sec/60;
  t.sec=t.sec%60;
  t.hr=t.hr+t.min/60;
  t.min=t.min%60;
  if(t.hr>=25)
  {
  return 1;
  }
  else
  {
    return 0;
  }
  }
  friend void operator<<(ostream &output,Time &t)
  {
  output<<"Enter hr :"<<t.hr<<endl;
  output<<"Enter min:"<<t.min<<endl;
  output<<"Enter sec :"<<t.sec<<endl;
  }
  int operator==(Time t1)
  {
  int tot=hr*3600+min*60+sec;
  int tot1=t1.hr*3600+t1.min*60+t1.sec;
  if(tot==tot1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
  }
  ~Time()
  {

  }
};
int main()
{
  Time t,t1;
  cout<<"Enter first time :"<<endl;
  if(cin>>t)
  {
  cout<<"Invalid Time :";
  return 0;
  }
  cout<<"First time :"<<endl;
  cout<<t;
  cout<<"Enter second time:"<<endl;
  if(cin>>t1)
  {
  cout<<"Invalid Time :"<<endl;
  return 0;
  }
  cout<<"second time:"<<endl;
  cout<<t1;
  if(t==t1)
  {
  cout<<"Both time are equal:"<<endl;
  }
  else
  {
  cout<<"Both time are not equal:"<<endl;
  }
  
  return 0;
}