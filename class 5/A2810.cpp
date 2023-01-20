#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    int inches;
    public:
    Distance()
    {

    }
    Distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
 Distance operator()(int a,int b ,int c)  //:member fun bnaya
{
    Distance d;
    d.feet=a+c+15;
    d.inches=a+b+20;
    return d;
}


void display()
{
    cout<<"feet "<<feet<<" inches "<<inches<<endl;
}
 //friend Distance operator()(int a,int b ,int c) ;*/


};
/* Distance operator()(int a,int b ,int c)  //:friend fun bnaya
{
    Distance d;
    d.feet=a+c+15;
    d.inches=a+b+20;
    return d;*/
int main()
{
    Distance d1(10,20);//parameteriz con
    Distance d2;//default con
    d1.display();
   d2=d1(10,20,30);
  d1.display();
   d2.display();
    return 0;
}