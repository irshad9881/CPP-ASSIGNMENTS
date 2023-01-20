
#include<iostream>
using namespace std;
class Shape
{
  public:
  void print()
  {
    cout<<"print() of Shape:"<<endl;
  }
};
class Rectangle:virtual public Shape
{
  public:
  void print()
  {
    cout<<"print of Rectagle:"<<endl;
  } 
};
class Tringle:virtual public Shape
{
  public:
  void print()
  {
    cout<<"Print of Tringle:"<<endl;
  }
};
class Circle:public Rectangle,public Tringle 
{
  public:
  Rectangle::print();
  Tringle::print();
  //cout<<"print of Circle:"<<endl;
 /* void print()
 {
   
    cout<<"print of circle:"<<endl;
  }*/
};
int main()
{
    Circle c;
    c.print();
   
    return 0;
}