#include<iostream>
using namespace std;
class A
{
  protected:
  int a;
  public:
  A(int x)
  {
    a=x;
    cout<<" A: "<<endl;
  }
};
class B:public A
{
  protected:
  int y;
  public:
  B(int y,int a):A(a)
  {
    this->y=y;
    cout<<" B: "<<endl;
  }
};
class C:public B
{
  private:
  int c;
  public:
  C(int c,int y,int a):B(y,a)
  {
    this->c=c;
    cout<<" C: "<<endl;
  }
  void show()
  {
   cout<<"a ="<<a<<endl<<"y= "<<y<<endl<<"c= "<<c<<endl;
  }
};
int main()
{
    C c1(100,100,100);
     c1.show();
     return 0;
}