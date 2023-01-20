#include<iostream>
using namespace std;
class Shape
{
 public:
void  area(){
  cout<<"Area of Shape:"<<endl;
}
};
class Square: public Shape//virtual likha mnen Class D me Class A ki Multiple copy nahi jaengi eh 
{                                //death of dimond (dimond priblem ka example) solution:
 public:
void  area()
{//Shape::area();
  cout<<"Area of Square:"<<endl;
}

};
class Circle: public Shape//virtual likha mnen Class D me Class A ki Multiple copy nahi jaengi eh 
 {                                //death of dimond (dimond priblem ka example) solution:
 public:
 void  area()
{// Shape::area();
  cout<<"Area of Circle:"<<endl;
}
};
class Rectangle:public Square,public Circle
{
 public:
 void area1()
 {  Shape::area();//error  ambiguous rectangle and shape me se kika call kren
    Square::area();
    Circle::area();
    cout<<"Area of Rectangle:"<<endl;
 }
};
int main()
{
   Rectangle r;
   r.area();
   return 0;
}