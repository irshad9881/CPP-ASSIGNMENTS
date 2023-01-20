#include<iostream>
using namespace std;
class Volume
{ 
    protected :
    double a,b,c;
    public:
    void setdata(double x,double y=0,double z=0)
    { 
        a=x;
        b=y;
        c=z;
    } 
 virtual void display()=0;
};
class Cube:public Volume 
{
 private:
 double v1;
 public:
 void display()
 {
 v1=a*b*c;
 cout<<"Volume of cube: "<<v1<<endl;
 }
};
class Sphere:public Volume 
{
 private:
 double v2;
 public:
 void display()
 {
 v2=(4*3.14*a*a*a)/3;
 cout<<"Volume of sphere: "<<v2<<endl;
 }
};
int main()
{
    Cube s1;
    int d1,d2,d3;
    cout<<"Enter three number: "<<endl;
    cin>>d1>>d2>>d3;
    s1.setdata(d1,d2,d3);
    s1.display();
    Sphere c1;
    cout<<"......................."<<endl;
    cout<<"Enter radius number: "<<endl;
    int d;
    cin>>d;
    c1.setdata(d);
    c1.display();
    return 0;
}