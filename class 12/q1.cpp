#include<iostream>
using namespace std;
class Dollar
{
 private:
 float d;
 public:
Dollar()
{
 cout<<"Default constoctor of Dollar:"<<endl;
}
Dollar(float x)
{
    cout<<"Parameterize of Dollar:"<<endl;
    d=x;
}
void show()
{
    cout<<"dollar=>"<<d<<endl;
}
operator float()
{
    cout<<"operator float():"<<endl;
    return d;
}
float get()
{
    return d;
}
};
class Rupee
{
 private:
 float r;
 public:
Rupee()
{
  cout<<"Default constoctor of Rupee:"<<endl;
}
Rupee(float y)
{
    cout<<"Parameteroze constoctor of Rupee:"<<endl;
    r=y;
}
void show()
{
    cout<<"rupee=>"<<r<<endl;
}
operator float()
{
    cout<<"operator float():"<<endl;
    return r;
}
operator Dollar()
{
    cout<<"operator Dollar():"<<endl;
    return r/100.0;
}
Rupee(Dollar d)
{
    cout<<"Parameterized constoctor of Rupee:"<<endl;
    r=d.get()*100.0;
}
};
int main()
{   float x;
    cout<<"Enter a float value:"<<endl;
    cin>>x;
    //float x=600;//or//
    Rupee r1=x;
    r1.show();
    float f1;
    f1=r1;
    cout<<"f1=>"<<f1<<endl;
    Dollar d;
    d=x;
    d.show();
    float f2;
    f2=d;
    cout<<"f2=>"<<f2<<endl;
    d=r1;
    d.show();
    r1=d;
    r1.show();
    return 0;
}