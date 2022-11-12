#include<iostream>
using namespace std;
int add(int ,int ,int=0 );
int main()
{
    //int a,b,c;
    //cout<<"Enter two number:"<<endl;
    //cin>>a>>b;
    cout<<"Sum is "<<add(2,3)<<endl;
    //cout<<"Enter three number:"<<endl;
    //cin>>a>>b>>c;
    //cout<<"Sum is "<<add(a,b,c)<<endl;
    return 0;
}
int add(int x,int y,int z)
{
    return x+y+z;
}