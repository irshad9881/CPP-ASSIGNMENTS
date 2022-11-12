#include<iostream>
using namespace std;
int f1(int );
float f2(float);
int main()
{
    int a;
    float b,f3;
    cout<<"Enter two number :"<<endl;
    cin>>a>>b;
    f1(a);
    {
    cout<<"First number is "<<f1(a)<<endl;
    }
    f2(b);
    {
     cout<<"Second number is "<<f2(b)<<endl;
    }
    f3=f1(a)+f2(b);
    cout<<"Sum is "<<f3<<endl;
    return 0;
}
int f1(int x)
{
    return x;
}
float f2(float y)
{
    return y;
}
