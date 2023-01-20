#include<iostream>
using namespace std;
class A
{
    private:
    int x;
    const int y;
    int &z;
    public:
    A(int a,int b):y(b),z(x)
    {
        x=a;
    }
    void show()
    {
        cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
    }
};
int main()
{
    A a(10,20);
    a.show();
    return 0;

}