//1////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;
class Shape
{
 public:
 void area1()
{
  cout<<"Area of Shape:"<<endl;
}
};
class Square: virtual public Shape//virtual likha mnen Class D me Class A ki Multiple copy nahi jaengi eh 
{                                //death of dimond (dimond priblem ka example) solution:
 public:
void  area2()
{ 
  cout<<"Area of Square:"<<endl;
}

};
class Circle :virtual public Shape//virtual likha mnen Class D me Class A ki Multiple copy nahi jaengi eh 
 {                                //death of dimond (dimond priblem ka example) solution:
 public:
 void  area3()
{ 
  cout<<"Area of Circle:"<<endl;
}
};
class Rectangle:public Square,public Circle
{
 public:
 void area4()
 {  area1();//Shape' is an ambiguous base of 'Rectangle' but hum CLASS SQUARE AND CIRLCE ME INHETI KARATEN TIME SHAPE CLASS KO VIRTUAL LIKA DDEN TO CHAL GYA
    area2(); //but rectangle ka area funtion ka name diffenrnt different karden to bhi error hai
    area3();//because  square and shape me same circle and shape dono me same area funtion inherit horaha hai
    cout<<"Area of Rectangle:"<<endl;//
 }
};
int main()
{
   Rectangle r;
   r.area4();
   return 0;
}
*/
//2///////////////////////////////////////////////////////////////
#include<iostream>//dimond problem by function
using namespace std;
class Shape
{
 public:
 void area1()
{
  cout<<"Area of Shape:"<<endl;
}
};
class Square: virtual public Shape
{                                
 public:
void  area2()
{ 
  cout<<"Area of Square:"<<endl;
}

};
class Circle :virtual public Shape
 {                                
 public:
 void  area3()
{ 
  cout<<"Area of Circle:"<<endl;
}
};
class Rectangle:public Square,public Circle
{
 public:
 void area4()
 { 
    cout<<"Area of Rectangle:"<<endl;
 }
};
int main()
{
    Rectangle r;
    r.area4();
    r.area1();//virtual lika to chal gya nahi to nahi chalta
    r.area2(); 
    r.area3();
    return 0;
}