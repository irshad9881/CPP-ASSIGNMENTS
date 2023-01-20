/*#include<iostream>
using namespace std;
template< class T,class F,class P>
class Rectangle
{
  private:
  T x;
  F y;
  P a;
  public:
  P area(T a1,F b )
  {
    a1*b;
    return a;
  }
 };
 int main()
 {
    Rectangle <float,int,float>r1;
    Rectangle <int,int,int>r2;
    Rectangle <float,float,float>r3;
    cout<<" Area ="<< r1.area(10.5,1)<<endl;
    cout<<" Area ="<< r2.area(10,10)<<endl;
    cout<<" Area ="<< r3.area(2.5,2.5)<<endl;
    return 0;
 }
 */
#include<iostream>
using namespace std;
class Rectangle
{
  private:
  double a=0;
  public:
  void area(int x,int y) //function overloading 
  {
     a= x*y;
     //return  a;
     cout<<"area "<<a<<"cm square"<<endl;
  }
  double area(int x,double y)
  {  
    a=x*y;
    return a;
  }
  double area(double x,double y)
  {
    a=x*y;
    return a;
  }
 void display()
 {
    cout<<"Area="<<a<<"cm squae"<<endl;
 }
};
int main()
{
    Rectangle r;
    r.area(100,10);//or//
    //r.display();
    r.area(10.2,1.1);
    r.display();
    r.area(10,2.5);
    
    r.display();
    return 0;
}