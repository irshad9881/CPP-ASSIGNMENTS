#include<iostream>
using namespace std;
class Shape
{
 public:
 virtual void Area()=0;
};
class Square :public Shape
{
  public:
 void  Area() 
 {
    cout<<"Area of square :"<<endl; 
 } 
};
class Circle:public Shape
{
 public:
 void AreaC()
 {
    cout<<"Area of circle :"<<endl;
 }
};
int main()
{
    Square s;
    s.Area();
    Circle c;
    c.Area();
    return 0;
}
