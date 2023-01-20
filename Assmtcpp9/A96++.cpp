#include<iostream>
using namespace std;
class B;
class A
{ 
    private:
    int n1;
    public:
    A()
    {
        n1=10;
    }
    void show1()
    {
        cout<<"Class A: "<<n1<<endl;
    }
    friend void swap(A *n1, B *n2); 
};
class B
{ 
    private:
    int n2;
    public:
    B()
    {
        n2=20;
    }
    void show2()
    {
        cout<<"Class A: "<<n2<<endl;
    }
    friend void swap(A *n1, B *n2); 
};
void swap(A *m1, B *m2)
{
    int p;
    p=m1->n1;
    m1->n1=m2->n2;
    m2->n2=p;
}
int main()
{
    A a;
    B b;
    swap(&a ,&b);
    a.show1();
    b.show2();
    return 0;
}
