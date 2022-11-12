#include<iostream>
using namespace std ;
void swap(int & , int &);
int main()
{
    int a,b;
    cout<<"Enter the number:"<<endl;
    cin>>a>>b;
    swap(a,b);
}
void swap(int &p  , int &q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
    cout<<"a ="<<p<<" b= " <<q;
}