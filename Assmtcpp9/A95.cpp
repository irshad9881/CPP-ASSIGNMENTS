#include<iostream>
using namespace std;
class Item
{
  public:
  int item_no;
  char name[100];
  float price;
};
class DisItem:public Item
{
  public:
  int dis_percentage;
  int dis_price;
  void input()
  {
    cout<<"Enter item no :"<<endl;
    cin>>item_no;
    cout<<"Enter item name: "<<endl;
    cin>>name;
    cout<<"Enter Ptrice : "<<endl;
    cin>>price;
    cout<<"Enter discounted percentage: "<<endl;
    cin>>dis_percentage;
    dis_price=price-price*dis_percentage/100;
    cout<<"............................... "<<endl;
  }
  void display()
  {
    cout<<"Item No: "<<item_no<<endl;
    cout<<"Item Name: "<<name<<endl;
    cout<<"Item price: "<<price<<endl;
    cout<<"discoutd percentage: "<<dis_percentage<<endl;
    cout<<"discounted price: "<<dis_price<<endl;
    cout<<".............................."<<endl;
  }
};
int main()
{
    DisItem d[100];
    int p=0,i,n,dis=0;
    cout<<"Enter howmany Item do you want: "<<endl;
    cin>>n;
cout<<".............................."<<endl;
    for(i=1;i<=n;i++)
    {
        d[i].input();
    }
cout<<".............................."<<endl;
    for(i=1;i<=n;i++)
    {
        d[i].display();
    }
    for(i=1;i<=n;i++)
    {
        p=p+d[i].price;
    } 
     for(i=1;i<=n;i++)
     {
        dis=dis+d[i].price-d[i].dis_price;
     } 
cout<<".............................."<<endl;   
     cout<<"Total price: "<<p<<endl;
     cout<<"Discount price : "<<dis<<endl;
cout<<".............................."<<endl;
     cout<<"Total Amount after discount: "<<p-dis<<endl;
     return 0;
}