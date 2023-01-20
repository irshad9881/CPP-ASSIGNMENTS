#include<iostream>
using namespace std;
class Rectangle
{
  private:
  double a=0;
  //double x,y,z;
  public:
  void area(int x,int y) //function overloading 
  {
    //this->x=x;
   // this->y=y;
    a= x+y;
    cout<<"SUM=="<<a<<endl;
  }
  double area(int x,double y)
  {  
    //this->x=x;
    //this->y=y;
    a=x+y;
    return a;
  }
  double area(double x,double y)
  {
   // this->x=x;
   // this->y=y;
    a= x+y;
    return  a;
  }
   int area(int x,int y,int z) //function overloading 
  {
   // this->x=x;
  //  this->y=y;
   // this->z=z;
    a=x+y+z;
    return a;
  }
  double area(int x,double y,double z)
  {  
   // this->x=x;
   // this->y=y;
   // this->z=z;
    a=x+y+z;
    return a;
  }
  double area(double x,double y,double z)
  {
   // //this->x=x;
   // this->y=y;
   // this->z=z;
    a=x+y+z;
    return a;
  }
 /*void display()  it is also possible
 {
    cout<<"Sum: ="<<a<<endl;
 }*/
};
int main()
{
    Rectangle r;
    //cout<<"sum="<<r.area(10,10)<<endl;
    r.area(100,100);
   // r.area(10.5,1.3);
   // r.display();
     cout<<"sum ="<<r.area(10.7,1.1)<<endl;
     cout<<"sum="<<r.area(10,2.5)<<endl;
     cout<<"sum="<<r.area(10,10,10)<<endl;
     cout<<"sum="<<r.area(10,10.2,1.1)<<endl;
     cout<<"SUM :="<<r.area(10.5,2.5,2.5);
    return 0;
}