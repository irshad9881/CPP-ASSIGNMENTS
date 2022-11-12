#include<iostream>
using namespace std;
int main()
{
int a[10],i,sum=0;
cout<<"Enter the number:"<<endl;
for(i=1;i<=10;i++)
{
cin>>i;
sum+=i;
}
cout<<"Sum is "<<sum<<endl;
return 0;
}