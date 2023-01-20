/*#include<iostream>//multiple inheritance
using namespace std;
class A
{ 
    public:
    void printA()
    {
        cout<<"Print of A:"<<endl;
    }
};
class B
{
 public:
 void printB()
 {
    cout<<"Print of B:"<<endl;
 }
};
class C:public A,public B
{
 public:
 void printC()
 {
    cout<<"Print of  C:"<<endl;
    printA();
    printB();
 }
};
int main()
{
    C a;
    //a.printA();
    //a.printB();
    //or//
     a.printC();
    return 0;
}*/

/////////////////////////////////////////

#include<iostream>
using namespace std;
class A
{ 
    public:
    void print()
    {
        cout<<"Print of A:"<<endl;
    }
};
class B
{
 public:
 void print()
 {
    cout<<"Print of B:"<<endl;
 }
};
class C:public A,public B
{
 public:
 void printC()
 {
    cout<<"Print of  C:"<<endl;
    A::print();
    B::print();
 }
};
int main()
{
    C a;
    // a.A::print();
    // a.B::print();
    //or//
    a.printC();
    return 0;
}