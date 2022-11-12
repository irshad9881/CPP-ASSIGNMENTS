#include<iostream>
using namespace std;
class Bank
{
    private:
    float t;
    float r;
    float p;
    float s;
    public:
    Bank(float x,float y,float z)
    { 
        p=x;
        t=y;
        r=z;
    }
 void calculateSimpleIntreast( )
    {
      s= p*r*t/100.0;
    }
  void  display()
{  
   cout<<s;

}
}; 
int main()
{
    Bank b(100.0,5.5,5.5);
    b.calculateSimpleIntreast();
    b.display();
    return 0;
}