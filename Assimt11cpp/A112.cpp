#include<iostream>
#define PI 3.14//macros
using namespace std;
class Shap
{
 protected:
 double a,b;
 public:
 void setdata(double x,double y=0)
 {
    a=x;
    b=y;
 }
 virtual void disarea()=0;
};
class Rectengle :public Shap
{
   private :
   double a1;
   public:
   void disarea()
   {
    a1=a*b;
    cout<<"Area of recangle :"<<a1<<endl;
   }
};
class Tiringle :public Shap
{
 private:
 double a2;
 public:
 void disarea()
 {
    a2=(a*b)/2;
    cout<<"Area of Tringle :"<<a2<<endl;
 }
};
class Circle :public Shap
{
 private:
 double a3;
 public:
 void disarea()
 {
    a3=PI*a*a;
    cout<<"Area of Circle :"<<a3<<endl;
 }
};
int main()
{
       Rectengle r;
       int x,y;
       cout<<"Enter two number:"<<endl;
       cin>>x>>y;
       r.setdata(x,y);
       r.disarea();
       Tiringle t;
       t.setdata(x,y);
       t.disarea();
       Circle c;
       c.setdata(x);
       c.disarea( );
       return 0;
}