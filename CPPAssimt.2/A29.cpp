#include<iostream>
using namespace std;
float Area(int);
int Area(int ,int );
int main()
{
    int r,a,b;
    cout<<"Enter the rasius:"<<endl;
    cin>>r;
    cout<<"Area of circle:"<<Area(r)<<endl;
    cout<<"Enter the length and wereth:"<<endl;
    cin>>a>>b;
    cout<<"Area of rectangle: "<<Area(a,b)<<endl;
    return 0;
}
float Area(int x)
{
    return 3.14*x*x;
}
int Area(int y,int z)
{
    return y*z;
}