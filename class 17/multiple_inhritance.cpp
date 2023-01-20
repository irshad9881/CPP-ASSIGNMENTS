/*//1////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
class Shape
{
 public:
 virtual void Area()=0;
};
class Square
{
  public:
   void  Area1() 
 {
    cout<<"Area of square 1:"<<endl; 
 } 
 void  Area() 
 {
    cout<<"Area of square :"<<endl; 
 } 
};
class Circle:public Square,Shape/////syntax is important
{
 public:
  void  Area2() 
 {
    cout<<"Area of square 2:"<<endl; 
 } 
 void Area()
 {
    cout<<"Area of circle :"<<endl;//override kiya Square class ko or samgh pureviltuel ki bjefh se smgh lo
 }
};
int main()
{
    Square s;
    s.Area();
    Circle c;
    c.Area(); 
    c.Area1(); 
    c.Area2(); 
    return 0;
}*/
//2////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;
class Shape
{
 public:
 virtual void Area()=0;
};
class Square
{
  public:
 void  Area() 
 {
    cout<<"Area of square :"<<endl; 
 } 
};
class Circle:public Square,Shape//syntanx is important here all examples ke
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
    //Circle c; abstract class so boject can not make 
    //c.Area(); amuguti (confusion ahi kiska call karen)
    return 0;
}*/
//3///////////////////////////////////////////////

/*#include<iostream>
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
*/
//4////////////////////////////////////////////////////
/*
#include<iostream>
using namespace std;
class Tringle
{
 public:
 void Area1()
 {
  cout<<"Area of Tringle:"<<endl;
 }
};
class Square 
{
  public:
  void  Area2()
 {
    cout<<"Area of square :"<<endl; 
 } 
};
class Circle:public  Square,Tringle///syntex of this line important
{
 public:

 
};
int main()
{
    Circle c;
    c.Area1(); //error  because syntax of inheritance
    c.Area2();
    //c.Area();//error because ambiguous
    return 0;
}*/ 

//5/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
class Tringle
{
 public:
 void Area1()
 {
  cout<<"Area of Tringle:"<<endl;
 }
};
class Square 
{
  public:
  void  Area2()
 {
    cout<<"Area of square :"<<endl; 
 } 
};
class Circle:public  Square,Tringle///syntex of this line important
{
 public:
   void  Area2()
 {
    cout<<"Area of square 1:"<<endl; 
 } 
  void Area1()
 {
  cout<<"Area of Tringle 1:"<<endl;
 }
};
int main()
{
    Circle c;
    c.Area1(); //error  because syntax of inheritance
    c.Area2();
    //c.Area();//error because ambiguous
    return 0;
}