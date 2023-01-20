#include<iostream>
using namespace std;
class Rupee
{
   private:
   int r;
   public:
   Rupee()
   {
    
   }
   Rupee(int r)
   {
    this->r=r;
   }
  void display()
   {
    cout<<"Rupee="<<r<<endl;
   }
   int getR()
   {
    return r/100;
   }
};
class Dollar
{
  private:
  int d;
  public:
  Dollar()
  {

  }
  Dollar(int d)
  {
    this->d=d;
  }
  void display()
  {
    cout<<"Dollar="<<d<<endl;
  }
  Dollar(Rupee r)
  {
     cout<<"PC of dollar:"<<endl;
     d=r.getR();
  }
  operator Rupee()
  {
    return d*100;
  }
};
int main()
{
    Rupee r1=200;
    Dollar d1=r1;
    d1.display();
    r1.display();
    r1=d1;
    d1.display();
    r1.display();
    return  0;
}