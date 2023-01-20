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

};
void input(Complex *p)
{
    int x,y;
    cout<<"Enter to number:"<<endl;
    cin>>x>>y;
    p->setdata(x,y);
}
int main()
{
    Complex c;
    int a,b;
    //cout<<"Enter your numbers:"<<endl;///user se data lena//or// 
    //cin>>a>>b;
    //c.setdata(a,b);
    input(&c);
    c.show();
    return 0;
}
