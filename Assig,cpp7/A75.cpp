/*#include<iostream>
using namespace std;
class Invent1
{
  private:
  float i;
  public:
  Invent1()
  {
   
  }
  Invent1(float x)
  {
   i=x;
  }
  float get()
  {
    return i;
  }
   operator float()
  {
    return i;
  }
  void display()
   {
    cout<<i<<endl;
   }
   operator long()
    {
    cout<<"long() called "<<endl;
    return i;
    }
};
int main()
{
    Invent1 i1(10);
    //float f=i1;
    //f=i1;/- 
    //i1.diplay();
    cout<<float(i1);
    return 0;
}*/
#include<iostream>
using namespace std;
class invent1
{
  private:
  float i1;
  float i2;
  public:
  invent1()
  {
   
  }
  invent1(float x,float y)
  {
   i1=x;
   i2=y;
  }
  float getA()
  {
    return i1;
  }
  float getB()
  {
    return i2;
  }
  void display()
   {
    cout<<"i1 ="<<i1<<"i2="<<i2<<endl;
   }
   operator long()
    {
    cout<<"long() called "<<endl;
    return i1+i2;
    }
   operator float()
    {
    cout<<"float() called "<<endl;
    return i1+i2;
    }
};
class invent2
{
  private:
  int d;
  public:
  invent2()
{

}
invent2(int c)
{
  d=c;
}
invent2(invent1 p)
{ 
  d=p.getA()+p.getB(); 
}
void display()
{

  cout<<"SUM ="<<d<<endl;
}
};
int main()
{
    invent1 i1(10,20);
    invent2 d1;
    float tv;
    tv=i1;
    d1=i1; 
    d1.display();
    cout<<"tv="<<float(tv);
    return 0;
}