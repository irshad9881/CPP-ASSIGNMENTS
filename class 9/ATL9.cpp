///////////////SET/////////////////////
//////////////////acending order///////////////////////
/*#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{ 
    set<int>q;
    q.insert(1);
    q.insert(3);
    q.insert(3);
    q.insert(2);
    q.insert(10);
    set<int>::iterator p;
    for(p=q.begin();p!=q.end();p++)
    {
        cout<<*p<<" ";
    }
    return 0;
}*/
///////////////SET/////////////////////
/////////////////decending order////////////////////////
/*#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{ 
    set<int,greater<int>>q;
    q.insert(1);
    q.insert(3);
    q.insert(3);
    q.insert(2);
    q.insert(10);
    set<int,greater<int>>::iterator p;
    for(p=q.begin();p!=q.end();p++)
    {
        cout<<*p<<" ";
    }
    return 0;
}*/

///////////////SET/////////////////////
/////////////////////////////////////////
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{ 
    set<int,greater<int>>q;
    q.insert(1);
    q.insert(3);
    q.insert(3);
    q.insert(2);
    q.insert(10);
    set<int>s1(q.begin(),q.end());
    set<int,greater<int>>::iterator p;
    for(p=q.begin();p!=q.end();p++)
    {
        cout<<*p<<" ";
    }
    cout<<endl;
     for(p=s1.begin();p!=s1.end();p++)
    {
        cout<<*p<<" ";
    }
    return 0;
}