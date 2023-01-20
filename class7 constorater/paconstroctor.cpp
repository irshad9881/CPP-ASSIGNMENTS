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
    cout<<"HELLOW GOOGLE:"<<endl;
 }
 Complex(int x,int y)
 {
    a=x;
    b=y;
 }
 void setdata(int x,int y)
 {
    a=x;
    b=y;
 }
Complex add(Complex c)
{
    Complex t;
    t.a=a+c.a;
    t.b=b+c.b;
    return t;
}
void print()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
};
int main()
{
    Complex c1(1,2),c2(2,3),c3;
    //c1.setdata(10,20);
    //c2.setdata(10,20);
    //c3.setdata(10,20);
    c3=c1.add(c2);
    c1.print();
    c2.print();
    c3.print();
    return 0;
}