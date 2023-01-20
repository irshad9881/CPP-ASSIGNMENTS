#include<iostream>
using namespace std;
class Proof
{
  protected:
  int x,y;
  Proof(){}
  public:
  Proof(int a,int b)
  {
    x=a;
    y=b;
  }
};
class Compute:public Proof 
{
 private:
 int c;
 public:
 Compute(){}
 Compute(int x,int y,int c):Proof(x,y)
 {
    this->c=c;
 }
 void Display()
 {
   if((x*x==y*y+c*c)||(y*y==x*x+c*c)||(c*c==x*x+y*y))
   {
      cout<<"Tringle is right angle tringle:"<<endl;
   }
   else
   {
    cout<<"Tringle is not tringle: "<<endl;
   }
 }
};
int main()
{
      //Compute c(3,4,5); 
       Compute c1;
       int a,b,c;
       cout<<"Enter three number:"<<endl;
       cin>>a>>b>>c;
       c1=Compute(a,b,c);
       c1.Display();
       return 0;
}