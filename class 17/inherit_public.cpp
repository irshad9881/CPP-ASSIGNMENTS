#include<iostream>
using namespace std;
class A 
{
  public:
  void f1()
  {
    cout<<"Public of A :"<<endl;
  }
  protected:
  void f2()
  {
    cout<<"Protected of A :"<<endl;
  }
  private:
  void f3()
  {
    cout<<" Private of A :"<<endl;
  }
};
class B:public A
{
 public:
 void f4()
 {
   f1();
   f2();
    cout<<"public  of B :"<<endl;
 }
};
int main()
{
    A a;
    a.f1();
   // a.f2();error
    B b;
    b.f1();
    b.f4();
   // b.f2();error
    return 0;
}