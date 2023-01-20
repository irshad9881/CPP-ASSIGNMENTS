#include<iostream>
using namespace std;
int main()
{
    int x;
    int count=0;
    cout<<"Enter your mobile:"<<endl;
    cin>>x;
    try
    {
    while(x)
    {
        x=x/10;
        count++;
    }
    if(count!=10)
    throw 1;
    if(count==10)
    //throw 2;
    throw "valid numbers";
   }
    catch(int y)
    {
     if(y==1)
       cout<<"Invalid:";
   }
   catch(const char *m)
   {
    cout<<m<<endl;
   }
   catch(...)
   {
    cout<<"Exception:";
   }
    return 0;
}