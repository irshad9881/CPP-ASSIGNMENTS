#include<iostream>
using namespace std;
class Complex
{
  private:
  int x;
  int y;
  public:
  Complex()
  {
    x=0;
    y=0;
  }
  Complex(int a)
  {
    x=a;
    y=0;
  }
  Complex(int a, int b)
  {  
    x=a;
    y=b;
  }
  Complex(Complex &s)
  {
    x=s.x;
    y=s.y;
  }
  void setdata(int a,int b)
  {
    x=a;
    y=b;
  }
  void show()
  {
    cout<<"x= "<<x<<" y="<<y<<endl;
  }

};
int mian()
{
    Complex c1(10,30),c2(100),c3,c5;
    c1.show();
    c2.show();
    c3.show();
    Complex c4=c1;
return 0;
}