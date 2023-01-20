#include<iostream>
using namespace std;
class Shap
{
 private:
 double a,b;
 public:
 void setdata(double x,double y)
 {
    a=x;
    b=y;
 }
 virtual void disarea(double x,double y)=0;
};
class Rectengle :public Shap
{
   private :
   double a1;
   public:
   void disarea(double a,double b)
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
 void disarea(double a,double b)
 {
    a2=(a*b)/2;
    cout<<"Area of Tringle :"<<a2<<endl;
 }
};
int main()
{
       Rectengle r;
       int x,y;
       cout<<"Enter two number:"<<endl;
       cin>>x>>y;
       r.disarea(x,y);
       Tiringle t;
       t.disarea(x,y);
       return 0;
}