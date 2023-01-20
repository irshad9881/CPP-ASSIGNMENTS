#include<iostream>
using namespace std;
class A
{
  private:
  int a;
  int b;
  public:
  void setdata(int x,int y)
  {
   a=x;
   b=y;
  }
  friend void add(A a1)
  {  
     cout<<"sum =" <<a1.a+a1.b<<endl;
  }
};
class B
{
 public:
 void add(){ }
};
/*void B :: add(A a1)//doubt  ese kun nahi lihk skte 
  {  
     cout<<"sum =" <<a1.a+a1.b<<endl;
  }*/
int main()
{ 
    A c1,c2;
    c1.setdata(1,10);
    //B b; 
    //b.add(c1);///////doubt////// B class ke member se call kun nahi hua :  
    add(c1);
    return 0;
}