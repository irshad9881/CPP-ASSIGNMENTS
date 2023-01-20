#include<iostream>
using namespace std;
class Item 
{
  private:
  int i;
  public:
  void display()
  {
    cout<<"Iteam i="<<i<<endl;
  }
  Item(int  t)
  {
    i=t;
  }
 Item()
 {
    
 }
};
class Product
{
  private:
  int a;
  int b;
  public:
  Product()
  {

  }
  Product(int x,int y)
  {
    a=x;
    b=y;
  }
 int  getA()
  {
    return a;
  }
  int getB()
  {
    return b;
  }
 void display()
 {
    cout<<"a="<<a<<" b"<<b<<endl;
 }
operator Item()
{
 
    return (a+b);
}
};
int main()
{
     Product p(200,200);
     Item i=p;
     p.display();
     i.display();
     return 0;
}
