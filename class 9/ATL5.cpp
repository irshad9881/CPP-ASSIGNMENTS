/////////////////////////FORWARD_LIST////////////////////////////////////////
/////////////////////////////////////////////////

#include<iostream>
#include<iterator>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int >l1;
    forward_list<int >l2;
    forward_list<int >l3;
    l1.assign({1,2,3,4,5});
    l2.assign(3,100);
    forward_list<int>::iterator p;
    for(p=l1.begin();p!=l1.end();p++)
    cout<<*p<<" ";
    cout<<endl;
    for(p=l2.begin();p!=l2.end();p++)
    cout<<*p<<" ";
    cout<<endl;
    l3.assign(l1.begin(),l1.end());
    for(p=l3.begin();p!=l3.end();p++)
    cout<<*p<<" ";
    cout<<endl;
    p=l3.begin();
    p++;
    p++;
    p++;
    p++; 
    l3.insert_after(p,{10,20,30});
    for(p=l3.begin();p!=l3.end();p++)
    cout<<*p<<" ";
    cout<<endl;
}