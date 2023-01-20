#include<iostream>
using namespace std;
class Complex
{
 private:
 int a;
 int b;
 public:
 void setdata(int x,int y)
 {
    a=x;
    b=y;
 }
 void show()
 {
    cout<<"x="<<a<<" y="<<b<<endl;
 }
 Complex greater(Complex c)
 {
    if((a+b)>(c.a+c.b))
    return *this;
    else
    return c;
 }
};
int main()
{
    Complex c1,c2,c3;
    int a,b;
    cout<<"Enter your numbers:"<<endl;///user se data 
    cin>>a>>b;
    c1.setdata(a,b);
     int x,y;
    cout<<"Enter your numbers:"<<endl;///user se data 
    cin>>x>>y;
    c2.setdata(x,y);
    c3=c1.greater(c2);
    c1.show();
    c2.show();
    c3.show();
    return 0;
}
