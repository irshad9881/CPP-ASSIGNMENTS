#include<iostream>
using namespace std;
class Area 
{
  private :
  int a,b,r;
  int S;
  float C;
  int R;
  public:
  void set(int x,int y,int z)
  {
    a=x;
    b=y;
    r=z;
  }
  int getA()
  {
    return a;
  }
  int getB()
{
    return b;
}
int getR()
{
    return r;
}
int getAreaS()
{
    return S;
}
int getAreaR()
{
    return R;
}
float getAreaC()
{
    return C;
}
void calculateS()
{
    S=a*a;
}
void calculateR()
{
    R=a*b;
}
void calculateC()
{
  C=3.14*r*r;
}
};
int main()
{
    Area c1,c2,c3;
    c1.set(10,20,5);
    c1.calculateS();
    c1.calculateR();
    c1.calculateC();
    cout<<"Area of square of the length "<<c1.getA()<<" is "<<c1.getAreaS()<<endl;
    cout<<" Area of circle of the radius "<<c1.getR()<<" is "<<c1.getAreaC()<<endl;
    cout<<"Area of rectangle of the length and wirith is "<<c1.getA()<<" and "<<c1.getB()<<" is "<<c1.getAreaR()<<endl;
    return 0;
}