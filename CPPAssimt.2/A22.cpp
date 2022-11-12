#include<iostream>
using namespace std;
int main()
{
    int a,b=0,r;
    cout<<"Enter a number :"<<endl;
    cin>>a;
    while(a!=0)
    {
        r=a%10;
        if(r>b)
        {
            b=r;
        }
        a=a/10;
    }
    cout<<"greater number is :"<<b;
    return 0;
}