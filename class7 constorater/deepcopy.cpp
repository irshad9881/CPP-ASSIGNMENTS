#include<iostream>
using namespace std;
class Shallo
{
 private:
 int a;
 int *p;
 public:
 Shallo(){p=new int;}//default con.
 void setdata(int x,int y)
 {
    a=x;
    *p=y;
 }
  Shallo( Shallo &c)//copy con.
 {
     a=c.a;
     p=new int;
     *p=*(c.p);
 }
 void print()
 {
    cout<<"a="<<a<<" p="<<*p<<endl;
 }
 ~Shallo()
 {
    cout<<"Bye"<<endl;
    delete p;
 }
};
int main()
{   Shallo c1;
    c1.setdata(100,2000);
    Shallo c3(c1);  //or//c3=c1 
    c3.~Shallo();//exrpticitly destroy kara ke dikhaya   //intstance memer hai
    c3.print();
    c1.print();
    return 0;
}