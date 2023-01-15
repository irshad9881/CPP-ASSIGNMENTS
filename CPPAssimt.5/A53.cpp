#include<iostream>
using namespace std;
class Complex 
{
    private:
    int real;
    int img;
    public:
    void display()
    {
    cout<<real<<"+"<<img<<"i"<<endl;
    }
     void input()
    {
    cout<<"Enter comlex no's"<<endl;
    cin>>real>>img;
    }
    friend Complex operator+(Complex , Complex);
};
    Complex operator+(Complex a,Complex b)
{ 
    Complex t;
    t.real=a.real+b.real;
    t.img=a.img+b.img;
    return  t;
}
int main()
{
Complex c1,c2,c3;
c1.input();
c2.input();
c1.display();
c2.display();
c3=c1+c2;
//c3=c1.operator+(c2);  nahi likh sakt e two argument pass karana krhnai
cout<<"Sum is:"<<endl;
c3.display();
return 0;
}