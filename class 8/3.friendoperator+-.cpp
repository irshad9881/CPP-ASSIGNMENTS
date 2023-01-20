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
  friend Complex operator+(Complex c1,Complex c2)
  {
    Complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
  }
  friend Complex operator-(Complex );
  void showdata()
  {
    cout<<"real="<<real<<" img="<<img<<endl;
  }
};
  Complex operator-(Complex c)
  {
    Complex t;
    t.real=-c.real;
    t.img=-c.img;
    return t;
  }
int main()
{ 
    Complex c1,c2,c3,c4;
    c1.setdata(10,20);
    c2.setdata(10,20);
    c3=c1+c2;//call keren ke way change hoga
    c4=-c1;
    //c3=operator+(c1,c2);//or// because it is friend 
    //c4=operator-(c1);   //or// becaude it is friend
    c1.showdata();
    c2.showdata();
    c3.showdata();
    c4.showdata();
    return 0;
}