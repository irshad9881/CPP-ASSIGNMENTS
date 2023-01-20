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
  Complex operator+(Complex c)
  {
    Complex t;
    t.real=real+c.real;
    t.img=img+c.img;
    return t;
  }
  void showdata()
  {
    cout<<"real="<<real<<" img="<<img<<endl;
  }
};
int main()
{ 
    Complex c1,c2,c3;
    c1.setdata(10,20);
    c2.setdata(10,20);
    c3=c1+c2;
    //c3=c1.operator+(c2);//or//
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}