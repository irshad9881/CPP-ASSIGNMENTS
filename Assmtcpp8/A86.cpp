#include<iostream>
using namespace std;
int main()
{
    int pin,count=0;
    cout<<"Enter Area pincode:"<<endl;
    cin>>pin;
    try
    {
        while(pin)
        {
            pin=pin/10;
            count++;
        }
        if(count==6)
        throw 1;
        if(count!=6)
        throw 2;
    }
    catch(int x)
    {
        if(x==1)
        cout<<"Valid pincode:"<<endl;
        if(x==2)
        cout<<"Invalid pincode:"<<endl;
    }
    catch(...)
    {
        cout<<"Exception:"<<endl;
    }
    return 0;  
}