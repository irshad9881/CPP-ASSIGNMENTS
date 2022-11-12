#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"Enter a number :"<<endl;
    cin>>a;
    for(i=0;i<a;i++)
    {
        if(a%2==0)
        {
        break;
        }
    }
    if(i==a)
    {
        cout<<"Number is prime "<<a;
    }
    else
    {
        cout<<"Number is not prime:"<<a;
    }
    return 0;
}