#include<iostream>
using namespace std;
class A
{
  private:
  int n,i, f=1;
  public:
  ~A(){cout<<"Hello"<<endl;}
  A(){ }
  A(int n)
  {
    for(i=1;i<=n;i++)
    {
    f=f*i;
    } 
  }
  void show()
  {
    cout<<"Factorial : "<<f<<endl;
  }
};
int main()
{
    A a;
    a=A(7);//constroctor call when object is creat  so it is not possible to call it by boject dot
    a.~A();//destroctor call when object is desteroy then it is possible
    a.show();
    return 0;
}