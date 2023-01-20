#include<iostream>
using namespace std;
class AB
{
 private:
 int a;
 public:
 AB(int x)
 {
    a=x;
 }
 int get()
 {
    return a;
 }
};
class A
{
    private:
    int x;
    int y;
    int &z;
    //AB ab=5;//it is work
    AB ab;
    public:
    A(int x,int y):x(x),y(y),z(x),ab(11)
    {
        //x=x;
        //y=y;error
        //this->x=x;either this or inisilizer list
        //this->y=y;
    }
    void show()
    {
        cout<<"x="<<x<<" y="<<y<<" z="<<z<<" ab="<<ab.get()<<endl;
    }
};
int main()
{
    A a(12,6);
    a.show();
    return 0;
}