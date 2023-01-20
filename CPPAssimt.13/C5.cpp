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
void showdata()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
Complex operator+(int k)
{
    Complex temp;
    temp.a=k+a;
    temp.b=b;
    return temp;
}
friend Complex operator+(int k,Complex c);
friend Complex operator+(Complex ,Complex );
Complex operator-()
{ 
    Complex temp;
    temp.a=-a;
    temp.b=-b;
    return temp;
}

};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.a=c1.a+c2.a;
    temp.b=c1.b+c2.b;
    return temp;
}
Complex operator+(int k,Complex c)
{
    Complex temp;
    temp.a=k+c.a;
    temp.b=c.b;
    return temp;
}
void inputdata(Complex *p)
{  int x,y;
    cout<<"Enter real and img part"<<endl;
    cin>>x>>y;+
    p->setdata(x,y);
}
int main()
{
    Complex c1,c2;
    inputdata(&c1);
    c1.showdata();
    return 0;
}