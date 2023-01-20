/*#include<iostream>
using namespace std;
class A
{
    protected:
    string name;
    int x;
    public:
    A()
    {
        cout<<"A class :"<<endl;
    }
    A(int a,string s)
    {
        name=s;
         x=a;
        cout<<"A:"<<endl;
    }
};
class B:public A
{
    private:
    int rank;
    public:
    B():A()
    {
        cout<<"B class 1 :"<<endl;
    }
    B(string name,int x,int rank):A(x,name)
    {
       this ->rank=rank;
       cout<<"B class 2: "<<endl;
    }
    void show()
    {
        cout<<"rank :"<<rank<<endl<<"Name :"<<name<<endl<<"age="<<x<<endl;
    }
};
int main()
{
   // B b1 ,b2("irshad",1001,101);
   // b2.show();
   //b1.show();
   B b,b1;
   cout<<"Enter name rank and age:"<<endl;
   int x1,r1;
   cin>>x1>>r1;
   cout<<"Name "<<endl;
   string n;
   cin>>n;
   b=B(n,x1,r1);
   b.show();
   return 0;
*/
#include<iostream>
using namespace std;
class A
{
    protected:
    int x;
    public:
    A()
    {
        cout<<"A class :"<<endl;
    }
    A(int a)
    {
         x=a;
        cout<<"A:"<<x<<endl;
    }
};
class B:public A
{
    private:
    int rank;
    public:
    B():A()
    {
        cout<<"B class 1 :"<<endl;
    }
    B(int x,int rank):A(x)
    {
       this ->rank=rank;
       cout<<"B class 2: "<<" rank" <<rank<<" age "<<x<<endl;
    }
};
int main()
{
    B b1 ,b2(1,101);
   return 0;
}