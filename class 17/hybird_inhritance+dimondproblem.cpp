#include<iostream>
using namespace std;
class Shape
{
 public:
 Shape()
 {
  cout<<"Area of Shape:"<<endl;
 }
};
class Square:virtual public Shape//virtual likha mnen Class D me Class A ki Multiple copy nahi jaengi eh 
{                                //death of dimond (dimond priblem ka example) solution:
 public:
 Square():Shape()
 {
    cout<<"Area of Square:"<<endl;
 }
};
class Circle:virtual public Shape//virtual likha mnen Class D me Class A ki Multiple copy nahi jaengi eh 
 {                                //death of dimond (dimond priblem ka example) solution:
 public:
 Circle():Shape()
 {
    cout<<"Area of circle:"<<endl;
 }
};
class Rectangle:public Square,public Circle
{
 public:
 Rectangle():Square(),Circle()
 {
    //Square::area();
    //Circle::area();
    cout<<"Area of Rectangle:"<<endl;
 }
};
int main()
{
   Rectangle r;
   //r.area();
   return 0;
}