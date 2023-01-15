/*#include<iostream>
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
  friend int operator>>(istream &input,Time &t)//&t
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
 // friend ostream& operator<<(ostream &output,Time t)
  //{
  //output<<"Enter hr :"<<t.hr<<endl;
  //output<<"Enter min:"<<t.min<<endl;
 // output<<"Enter sec :"<<t.sec<<endl;
 // return output;
 // }
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
  Time t,t1,t2;
  cout<<"Enter first time :"<<endl;
  if(cin>>t)
  {
  cout<<"Invalid Time :";
  return 0;
  }
  cout<<"First time :"<<endl;
  cout<<t;
  //cout<<t<<t2;//eh likhne kelei oper ostream return type kiya
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
*/
#include<iostream>
using namespace std;
class Time
{ 
  private:
  int h,m,s;
   public:
  Time()
  {
    h=0;
    m=0;
    s=0;
  }
   friend int operator>>(istream &input,Time &t) 
   {
       cout<<"Enter your hour ,min and second: "<<endl;
       input>>t.h>>t.m>>t.s;
       t.m=t.m+t.s/60;
       t.s=t.s%60;
       t.h=t.h+t.m/60;
       t.m=t.m%60;
       if(t.h>=25)
       {
        return 0;
       }
       else
       return 1;
   }
     friend void operator<<(ostream &output,Time &t) 
   {
    output<<"Enter your hour: "<<t.h<<endl;
    output<<"Enter your min : "<<t.m<<endl;
    output<<"Enter your sec : "<<t.s<<endl;
   }
    int operator==(Time t)
    {
      int  tot1,tot2;
       tot1=h*3600+m*60+s;
       tot2=t.h*3600+t.m*60+s;
       if(tot1==tot2)
       {
        return 1;
       }  
       else
       {
        return 0;
       }
     
    }  
    ~Time(){ } 
}; 
int main()
{
  Time t1,t2,t3;
  if(cin>>t1)
  {
    cout<<"Invalid time "<<endl;
    return 0;
  }
  cout<<"FIST "<<endl;
  cout<<t1;
    if(cin>>t2)
  {
    cout<<"Invalid time "<<endl;
    return 0;
  }
  cout<<"FIST "<<endl;
  cout<<t2;///endl; nahi laga skate
    if(cin>>t3)
  {
    cout<<"Invalid time "<<endl;
    return 0;
  }
  cout<<"FIST "<<endl;
  cout<<t3;
  if(t1==t2)
  {
    cout<<"Both are equal:"<<endl;
  }
  else
  cout<<"Not equal"<<endl;
  return 0;
}