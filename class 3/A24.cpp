#include<iostream>
using namespace std;
int fact(int n )
{
  int i,  f=1;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    return f;
}
int com(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
void p(int lines)
{   
  int i,j,k,r;
    for(i=1;i<lines;i++)
    {int k=1,r=0;
    for(j=1;j<=2*lines-1;j++)
    { 
        if((j>=lines-i+1) && (j<=lines+i-1) && k)
        {
          cout<<com(i-1,r);
          k=0;r++;
        }
        else
        {
          cout<<" ";
          k=1;
        }
    } 
    cout<<endl;
    }
}
int main()
{
    int n,r;
    cout<<"Enter number :"<<endl;
    cin>>n;
    p(n);
    cout<<endl;
    return 0;
}
