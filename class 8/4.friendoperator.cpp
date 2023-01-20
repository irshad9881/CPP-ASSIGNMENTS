#include<iostream>
using namespace std;
class Complex
{
  private:
  int real;
  int img;
  public:
  void setdata(int x,int y)
  {
   real=x;
   img=y;
  }
   Complex operator+(int k)
  {  
    Complex t;
    t.real=real+k;
    t.img=img;
    return t;
  }
  friend Complex operator+(int k,Complex c)
  {                                  
    Complex t;
    t.real=c.real+k;
    t.img=c.img;
    return t;
  }
  void showdata()
  {
    cout<<"real="<<real<<" img="<<img<<endl;
  }
};
int main()
{ 
    Complex c1,c2,c3,c4;
    c1.setdata(10,20);
    c2.setdata(10,20);
    c4=c2+6;
    c3=11+c1;//call keren ke way change hoga
    c1.showdata();
    c2.showdata();
    c3.showdata();
    c4.showdata();
    return 0;
}