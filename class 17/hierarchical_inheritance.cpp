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
class Circle:public Shape
{
 public:
 void Area()
 {
    cout<<"Area of circle :"<<endl;// pureviltuel ki bjefh se lika fun name same smgh lo
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
 void Area()
 {
  cout<<"Area of Tringle:"<<endl;
 }
};
class Square 
{
  public:
  void  Area()
 {
    cout<<"Area of square :"<<endl; 
 } 
};
class Circle:public Tringle,public Square///syntex of this line important
{
 
 
};
int main()
{
    Circle c;
    c.Square::Area();
    c.Tringle::Area();
    //c.Area();//error because ambiguous
    return 0;
}
