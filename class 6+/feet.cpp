#include <iostream>
using namespace std;
class Distance
{
    private:
    int f;
    int in;
    public:
    Distance()
    {

    }
     Distance(int x,int y)
     {
       f=x;
       in=y;
     }
    Distance operator()(int x, int y,int z)
    {
        Distance temp;
        temp.f = x+z+5;
        temp.in = x+y+15;
        return temp;
    }
    void display()
    {
        cout << " feet=" << f << " inch=" << in < < endl;
    }
};
int main()
{
    Distance d1(5,10);//.parameterized constructor:
    Distance d2;
    d1.display();
    d2 = d1(10, 20, 30);//operator () call
    d1.display();
    d2.display();
    return 0;
}
