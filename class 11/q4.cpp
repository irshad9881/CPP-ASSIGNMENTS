#include<iostream>
using namespace std;
class Complex 
{
    private:
    int real;
    int img;
    public:
    Complex()
    {

    }
    Complex(int a)
    {
        real=a;
        img=a;
    }
    void show()
    {
        cout<<"real="<<real<<"\n"<<" img="<<img<<endl;
    }
}; 
int main()
{
    Complex c;
    c=6;//Assignement operator internaly call hoga:
    c.show();
    return 0;
}
