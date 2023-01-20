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
  private:
  int c;
  public:
  B(int c,int a):A(a)
  {
    this->c=c; 
    cout<<" C: "<<endl;
  }
  void show()
  {
   cout<<"a ="<<a<<endl<<"c= "<<c<<endl;
  }
};
int main()
{
    B c1(100,1000);
     c1.show();
     return 0;
}