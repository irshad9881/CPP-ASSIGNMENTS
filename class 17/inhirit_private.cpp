#include<iostream>
using namespace std;
class A 
{
  public:
  void f1()
  {
    cout<<"Public of A :"<<endl;
  }
  protected:
  void f2()
  {
    cout<<"Protected of A :"<<endl;
  }
  private:
  void f3()
  {
    cout<<" Private of A :"<<endl;
  }
};
class B:private A   //because protected ko child class me to use karsakte hai 
                    //chhen protected inheritence ho rha but protected inh.. ho rha to ese main se dictly use nahi karsakte   
{                   //eh public and praivate  protected likhten hain eh ji class me inheritane kara rahe uske lie nahi likha 
 public:            //public main ya jo is inherit karega uske liye likha hai
 void f4()          //private inhi.. karane se f1() and f2() private hoge kiskelie  class B ke le nahi "main" or jo ise "inhit karegi" uske liye bh inhe ab access nahi karsakten
 {
    f1();
    f2();
    cout<<"public  of B :"<<endl;
 }
};
class C:public B
{
    public:
    void f5()
    {
         f4();
       // f1();
       // f2();
        cout<<"Public of  C:"<<endl;
    }
};
int main()
{
    A a;
    a.f1();
    //a.f2();  error
    B b;
    b.f4();
    // b.f1(); error
    // b.f2(); error
    C c;
    //c.f1();  error 
    //c.f2();  error
    c.f4();
    c.f5();
    return 0;
}