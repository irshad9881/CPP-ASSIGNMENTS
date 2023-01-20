 #include<iostream>
using namespace std;
class Shape
{
 public:
 virtual void area()=0;
};
class Square:public Shape
{
 public:
 void area()
 {
    cout<<"Area of Square:"<<endl;
 }
};
class Circle:public Shape
{
 public:
 void area()
 {
    cout<<"Area of circle:"<<endl;
 }
};
class Rectangle:public Square,public Circle
{
 public:
 void area()
 {
    Square::area();
    Circle::area();
    cout<<"Area of Rectangle:"<<endl;
 }
};
int main()
{
   Rectangle  r;
   r.area();
   return 0;
}