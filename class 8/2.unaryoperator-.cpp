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
  Complex operator-()
  {
    Complex t;
    t.real=-real;
    t.img=-img;
    return t;
  }
  void showdata()
  {
    cout<<"real="<<real<<" img="<<img<<endl;
  }
};
int main()
{ 
    Complex c1,c2;
    c1.setdata(10,20);
    c2=-c1;
    //c2=c1.operator-();//or//
    c1.showdata();
    c2.showdata();
    return 0;
}