#include<iostream>
using namespace std;
class Complex
{
 private:
 int a;
 int *p;
 public:
 Complex()
 {
    a=0;
    p=new int;
    cout<<"google"<<endl;
}
 void setdata(int x,int y)
 {
    a=x;
    p=new int;
    *p=y;
 }
void update(int x,int y)
{
   a=x;
   *p=y;
}
void print()
{
    cout<<"a="<<a<<" b="<<*p<<endl;
}
};
int main()
{
    Complex c1,c2,c3;
     c1.update(100,200);
    c1.setdata(10,20);//pahle 10,20 thi niiche update karke 100 and 200 kardi
   
    c2.setdata(10,20);
    c3.setdata(10,20);
   // c3.setdata(10,20);
    c1.print();
    c2.print();
    c3.print();
    return 0;
}