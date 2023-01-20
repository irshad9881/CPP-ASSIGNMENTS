/*
#include<iostream>
using namespace std;
class A
{
  private:
  int n,f=1;
  public:
  ~A(){cout<<"Hello"<<endl;}
  A(){ }
  A(int x)
  {
     n=x;
  }
  A(A &m)//copy constroctor:
  {
    n=m.n;
  }
  void cal()
  {
    for(int i=1;i<=n;i++)
    f=f*i;
  }
  void show()
  {
    cout<<"Factorial : "<<f<<endl;
  }
};
int main()
{
    int n1;
    cout<<"Enter the number: "<<endl;
    cin>>n1;
    A f1=n1; // or A f1(n1);//
    f1.cal();
    f1.show();
    A f2=f1; // or A f2(f1); //
    f2.cal();
    f2.show();
    //by pc con..
    //a=A(7);//constroctor call when object is creat  so it is not possible to call it by boject dot
    // a.~A();//destroctor call when object is desteroy then it is possible
    // a.show();
     return 0;
}*/

#include<iostream>
using namespace std;
class A
{
  private:
  int n,f=1;
  public:
  ~A(){cout<<"Hello"<<endl;}
  A(int x){n=x;}
  A(A &m)//copy constroctor:
  {
    n=m.n;
    for(int i=1;i<=n;i++)
    f=f*i;
  }
  void show()
  {
    cout<<"Factorial : "<<f<<endl;
  }
};
int main()
{   
    A f2(5);
    A f1=f2;
    f1.show();
    return 0;
}