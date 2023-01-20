#include<iostream>
using namespace std;
class Complex
{
  private:
  int a,b;
  public:
  void setdata(int x,int y)
  {
    a=x;
    b=y;
  }
  Complex sum(Complex c)
  {
     if((a+b)>(c.a+c.b))
  {
    return *this;
  }
  else
  {
    return c;
  }
  }
  void showdata()
  {
    cout<<"a="<<a<<" b="<<b;
  }
};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(10,29);
    c2.setdata(10,30);
    c3=c1.sum(c2);
    c3.showdata();
    return 0;
}