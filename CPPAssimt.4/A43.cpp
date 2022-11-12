#include<iostream>
using namespace std;
class Cube
{
   private:
   double a;
   public:
   Cube(double x)//
   {
    a=x;
   }
 /*void set(int x)//jab parameterize constructor banaya to setter bane ki requriement nahi
   {
    a=x;
   }*/
   double getA()
   {
    return a;
   }
   double volume()//
   {
    return a*a*a;
   }
   Cube()//
   {

   }
};
int main()
{    Cube a1(2.55);
     Cube a2;
     cout<<"Volume is "<<a1.getA()<<" is "<<a1.volume()<<endl;
     //cout<<"Second s is "<<a2.setA()<<endl;
     //cout<<"Volume of cube of sedes "<<a2.get()<<" is" <<a2.volume()<<endl;
}

   