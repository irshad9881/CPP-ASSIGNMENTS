#include<iostream>
using namespace std;
class Rectangle 
{  
    private:
    int a;
    int b;
    int Area;
    public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    } 
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    int getarea()
    {
        return Area;
    }
    void calculateArea()
    {
        Area=a*b;
    }
};
int main()
{
    Rectangle c1;
    c1.set(10,20);
    c1.calculateArea();
    cout<<"AREA OF "<<c1.getA()<<" and "<<c1.getB()<<" is "<<c1. getarea();
    return 0;
}