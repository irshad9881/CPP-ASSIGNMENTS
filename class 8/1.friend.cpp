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
 friend void add( Complex c);
};
 void add(Complex t)//clss me defin kasakte hin
{   // Complex t;
    // t.setdata(10,2);
     cout<<"sum =" <<t.real+t.img<<endl;
}
int main()
{ 
    Complex c1,c2;
    c1.setdata(10,20);
    //add();
    add(c1);
    return 0;
}