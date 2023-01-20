/*#include<iostream>
using namespace std;
class A
{
 private:
 int a,b;
 public:
 void swap(int *p,int *q)
 {
    int t;
    t=*p;
    *p=*q;
    *q=t;
 }
};
int main()
{
    A a;
    int x,y;
    cout<<"Enter two number:"<<endl;
    cin>>x>>y;      
    a.swap(&x,&y);
    cout<<"x="<<x<<endl<<"y="<<y<<endl;
    return 0;
}*/
#include<iostream>//right
using namespace std;
class Pointer 
{ 
private:
int x;
public:
Pointer(int x)
{
    this->x=x;
}
void swap(Pointer *p)
{
    int t;
    t=x;
    x=p->x;
    p->x=t;
}
void show()
{
    cout<<"Num :"<<x<<endl;
}
};
int main()
{
    Pointer p(10),p2(20);
    cout<<"Before swap :"<<endl;
    p.show();
    p2.show();
    cout<<"After swap :"<<endl;
    p.swap(&p2);
    p.show();
    p2.show();
    return 0;
}