#include<iostream>
using namespace std;
class A
{
  public:
  void f1()
  {
    cout<<"f1 of A:"<<endl;
  }
  protected:
  void f2()
  {
    cout<<"f2 of A:"<<endl;
  }
  private:
  void f3()
  {
    cout<<"f3 of A:"<<endl;
  }
};
class B:protected A
{
    public:
    void f4()
    {
        f1();
        f2();
    }
};
int main()
{
    A a ;
    a.f1();
    B b;
    //b.f1();
    b.f4();
    return 0;
}