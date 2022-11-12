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
    
  }
Complex operator+(Complex c )
  {  
    Complex temp ;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
  }
};
int main()
{
  Complex a1,a2,a3;
  a1.setdata(5,10);
  a2.setdata(5,20);
  a3=a1.operator+(a2);
  return 0;
}