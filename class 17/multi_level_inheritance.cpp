/*#include<iostream>
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
class Circle:public Square
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
*/
///////////////////////////////////////////////

#include<iostream>
using namespace std;
class Tringle
{
 public:
 virtual void Area()
 {
  cout<<"Area of Tringle:"<<endl;
 }
};
class Square :public Tringle
{
  public:
 void  Area() 
 {
    cout<<"Area of square :"<<endl; 
 } 
};
class Circle:public Square
{
 public:
 
 
};
int main()
{
    Square s;
    s.Area();
    Circle c;
    c.Area();
    return 0;
}
