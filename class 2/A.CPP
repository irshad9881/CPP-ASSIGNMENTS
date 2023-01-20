#include<iostream>
using namespace std;
class Array
{
 private:
 int a[100];
 int size=0;
 public:
 void insert(int index,int v)
 {
    a[index]=v;
    size++;
 }
 void deleteA(int index)
 {
    for(int i=index;i<size;i++)
    {
       a[i]=a[i+1];

    }
    a[size-1]=0;
    size--;
 }
 void print()
 {
    for(int i=0;i<size;i++)
    cout<<a[i]<<" ";
 }
 int search(int index)
 {
    for(int i=0;i<size;i++)
    {
        if(a[i]==index)
        return i;
       
    } return -1;
 }
 void insertA(int index,int v)
 {
    if(size>=100)
    {
        cout<<"Not place is empty:"<<endl;
    }
    else
    {
   for(int i=size-1;i>=index;i--)
   {
    a[i+1]=a[i];
   }
   size++;
   a[index]=v;
    } 
 }
};
int main()
{
    Array a;
    int n,x,m,index;
    cout<<"Enter element :"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<"element:"<<endl;
    for(int i=0;i<n;i++)
    {   cin>>x;
        a.insert(i,x);
    }
    cout<<"Enter index :"<<endl;
    cin>>m;
    a.deleteA(m);
    a.print();
    cout<<"enter index :"<<endl;
    cin>>index;
    int k=a.search(index);
    if(k!=-1)
    {
        cout<<"Elemnet found "<<index<<endl;
    }
    else 
    cout<<"Element not found:"<<endl;
    cout<<"Enter index where:"<<endl;
    cin>>index>>m;
    a.insertA(index,m);
    a.print();
    return 0;
}