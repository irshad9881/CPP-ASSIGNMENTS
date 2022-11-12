#include<iostream>
using namespace std;
class Box
{
    private:
    double lenth;
    double breadth;
    double height;
    double v;
    public:
    Box(double x,double y,double z)
    {
    lenth=x;
    breadth=y;
    height=z;
    }
    double getVolume()
    {
    return v;
    }
    void calculateVolume()
    { 
    v=lenth*breadth*height;
    }
};
int main()
{
    Box b(10,2.5,2.5);
    b.calculateVolume();
    cout<<"Volume is "<<b.getVolume()<<endl;
    return 0;
}