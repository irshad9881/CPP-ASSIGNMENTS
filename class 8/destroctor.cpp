#include<iostream>
using namespace std;
class A
{
  public:
  int *p;
  A(int x)
  {
    p=new int ;
    *p=x;
  }
  A(A &x)
  {
   p=new int;
   *p=*(x.p);
  }  
  void show()
  {
    cout<<*p<<endl;
  }
/*void relize()
{
    delete p;
}*/
~A()
  {
    cout<<"bye :"<<endl;
    delete p;
  }
};
int main()
{
    A a1(100);

    a1.show();
    A a2=a1;
    a2.show();
    return 0;
}

