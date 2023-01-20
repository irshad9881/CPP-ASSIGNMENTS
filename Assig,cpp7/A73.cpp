#include<iostream>
using namespace std;
class Product
{
    private:
    int a;
    int b;
    public:
    Product(int x,int y)
    {
    a=x;
    b=y;
    }
   /* void setdata(int x,int y)
    {
      a=x;
      b=y;
    }*/
    Product() 
    {
  
    }
    int getA()
    {
     return a;
    }
    int getB()
    {
      return b;
    }
     void display()
    {
      cout<<"A="<<a<<" B="<<b<<endl;
    }
};
class Item
{
  private:
  int i;
  public:
  Item()
  {

  }
  Item(int i)
  {
    this->i=i;
  }
  Item(Product p)
  {
    cout<<"Iteam(Product ) call: "<<endl;
    i=p.getA()+p.getB();
  }
  void display()
  {
    cout<<" Item I ="<<i<<endl;
  }
 /*Item operator=( Item i)      //eh internali hua compiler ne kiya hoaga//kunnki ncompiler apna bhi assim operator overload karta hai
 {
  cout<<"Assigenmet call:"<<endl;
  return Item();              //garbage value dega kunki assigen. operator ko enha overload nahi kiya samghane ke liye likea
 }*/
};
int main()
{
    Product p1(10,20);
    Item i1;
    i1=p1; //( //parameteried constructor call hua hoga usme pruduct class ka objet as parameter pass hua hoga usne item class ka tempreroy obj retrn kiya hoga bh i1 me assigen hua hai:
            //if we write in this way Item i1=p1;  enha assig call nahi hoga kunki eh initilizetion hai;)//
    p1.display();
    i1.display();
    return 0;
}
