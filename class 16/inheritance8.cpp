
#include<iostream>
using namespace std;
class Shape
{
  public:
  virtual void print()=0;
};
class Rectangle:public Shape
{
  public:
  void print()
  {
    cout<<"print of Rectagle:"<<endl;
  } 
};
class Tringle:public Shape
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
  void print()
  {
    Rectangle::print();
    Tringle::print();
    cout<<"print of circle:"<<endl;
  }
};
int main()
{
    Circle c;
    c.print();
   
    return 0;
}