#include<iostream>
using namespace std;
class B;
class A
{ 
    private:
    int n1;
    public:
    A(int x)
    {
        n1=x;
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
    B(int y)
    {
        n2=y;
    }
    void show2()
    {
        cout<<"Class B: "<<n2<<endl;
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
    A a(11);
    B b(12);
    a.show1();
    b.show2();
    swap(&a ,&b);
    cout<<"after swap:"<<endl;
    a.show1();
    b.show2();
    return 0;
}
