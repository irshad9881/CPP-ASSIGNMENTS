#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;
    public:
    void setdata(int x ,int y)
    {
    real=x;
    img=y;
    }
    void showdata()
    {
    cout<<"Real="<<real<<" Img="<<img<<endl;
    }
    Complex add(Complex c )
    {
    Complex t;
    t.real=real+c.real;
    t.img=img+c.img;
    return t;
    }
};
int main()
{
   Complex c1,c2,c3;
   c1.setdata(10,20);
   c2.setdata(20,30);
   c1.showdata();
   c2.showdata();
   c3=c1.add(c2);
   c3.showdata();
   return 0;
}