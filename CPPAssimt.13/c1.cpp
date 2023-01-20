#include<iostream>
using namespace std;
class complex 
{
    private:
   int  real;
    int img;
    public:
    complex (int x )
    {
        real=x;
        img=x;
    }
    complex()
    {

    }
    void display()
    {
        cout<<"real= "<<real<<" Img="<<img;
    }

};
int main()
{
    complex c;
    c=10;
    c.display();
    return  0;
}