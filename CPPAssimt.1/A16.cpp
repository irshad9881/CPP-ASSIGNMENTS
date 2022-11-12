#include<iostream>
using namespace std;
int main()
{
   int a ,b,c,sum=0;
   float avg=0.0;
   cout<<"Enter two number:"<<endl;
   cin>>a>>b>>c; 
   sum=a+b+c; 
   avg=sum/3.0;
   cout<<"Sum = "<<sum<<endl;
   cout<<"Avg = "<<avg<<endl;
   return 0; 
}
