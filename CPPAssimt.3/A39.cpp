#include<iostream>
using namespace std;
class Circle
{
    private:
    int r;
     float Area;
    public:
    void set(int x)
    {
        r=x;
    }
    int get()
    {
        return r;
    }
    float getArea()
    {
        return Area;
    }
    void calculateArea()
    {
        Area=3.14*r*r;
    }
};
int main()
{
    Circle a;
    a.set(5);
    a.calculateArea();
    cout<<"Area of radius "<<a.get()<<" is "<<a.getArea()<<endl;
    return 0;
}