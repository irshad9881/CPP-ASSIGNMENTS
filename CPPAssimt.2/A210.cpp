#include<iostream>
using namespace std;
float f1(float );
float f2(float );
int main()
{
    float a,b,s;
    cout<<"Enter two number:"<<endl;
    cin>>a>>b;
    f1(a);
    f2(b);
    if(f1(a)>f2(b))
    {
      cout<<"Greater number is "<<f1(a)<<endl;
    }
    else 
    {
        cout<<"Greater num is "<<f2(b)<<endl;
    }
}
float  f1(float a)
{
    return a;
}
float f2(float b)
{
     return b;
}