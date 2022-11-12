#include<iostream>
using namespace std;
int main()
{
    int n,f1=-1,f2=1,f3;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    if(n==0)
        cout<<"Numnber is fibonaci series:"<<endl;
    f3=f1+f2;
    while(f3<n)
    {
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    if(f3==n)
    {
        cout<<"Number is fibonacci:"<<f3<<endl;
    }
    else
    {
        cout<<"Not fiboncci:"<<endl;
    }
}