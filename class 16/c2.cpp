using namespace std;
 #include<iostream>
class A
{
 private:
 void privateA()
 {
    cout<<"public A:"<<endl;
 }
 protected:
 void protectedA()
 {
    cout<<"Protected A:"<<endl;
 }
 public:
 int x;
 A(int a)
 {  a=x;
    cout<<"pC of A:"<<endl;
 }
 void publicA()
 {
    cout<<"Public:A "<<endl;
 }
 ~A(){
    cout<<"dectoctor of A:"<<endl;
 }
};
class B:public A
{
 private:
 void privateB()
 {
    cout<<"public B:"<<endl;
 }
 protected:
 void protectedB()
 {
    cout<<"Protected B:"<<endl;
 }
 public:
 B():A(11)
 {
    cout<<"dc of B:"<<endl;
 }
 void publicB()
 {
    //privateA();
    protectedA();
    publicA();
    cout<<"Public:B"<<endl;
 }
 ~B()
 {
    cout<<"dectoctor of B:"<<endl;
 }
};
int main()
{
    A *b=new B();
    delete b;
    //b.privateB();
    //b.protectedB();
    //b.publicB();
}