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
    const int y;
    int &z;
    //AB ab=5;//it is work
    AB ab;
    public:
    A(int a,int b):y(b),z(x),ab(12)//this is also work
    {
        x=a;
       // ab=5;//it is not work
    }
    void show()
    {
        cout<<"x="<<x<<" y="<<y<<" z="<<z<<" ab="<<ab.get()<<endl;
    }
};
int main()
{
    A a(10,20);
    a.show();
    return 0;
}