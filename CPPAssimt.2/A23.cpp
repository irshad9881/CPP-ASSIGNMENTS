#include<iostream>
using namespace std;
int main()
{
    int x,y,i,p=1;
    cout<<"Enter num and puower"<<endl;
    cin>>y>>x;
    for(i=1;i<=x;i++)
    {
      p=p*y;
    }
    cout<<"Result is "<<p;
    return 0;
}