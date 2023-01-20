#include<iostream>
using namespace std;
class Complex
{
 private:
 int a;
 int b;
 public:
 Complex()
 {
    a=0;
    b=0;
    cout<<"default constoctor:"<<endl;
 }
  Complex(int x)
 {
    a=x;
    b=0;
    cout<<"PA one constotor:"<<endl;
 }
  Complex(int x,int y)
 {
    a=x;
    b=y;
    cout<<"PA with two constotor:"<<endl;
 }
  Complex(const Complex &c)
 {
    a=c.a;
    b=c.b;
    cout<<"copy constotor:"<<endl;
 }
 void setdata(int x,int y)
 {
    a=x;
    b=y;
 }
};
int main()
{
    Complex c1(1,2),c2(2),c4;
    Complex c3(c1);  //or//c3=c1 
    return 0;
}