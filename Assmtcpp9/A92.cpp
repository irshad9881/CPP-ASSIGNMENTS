/*#include<iostream>
using namespace std;
class B 
{            ////////PROTECTED BANANE SE BACHE  IN BIGET PROJECT
    protected://private bane to chaild class me access nahi karsak te bnana honge :
    float a,b;   //public banen to  print main me bhi call kar sakten hain
    public:
    void input()
    {
    cout<<"Enter two number:"<<endl;///bade projcted me getter setter banaen 
    cin>>a>>b;
    }
    float getA()
    {
        return a;
    }
    float getB()
    {
        return b;
    }
};
class D:public B
{
   public:
   float d;
   void print()
   {
    //d=getA()+getB();
    d=a+b;
    //cout<<"Sum="<<d;
   }  
   void display()
   {
    cout<<"sum="<<d<<endl;
   }
};
int main()
{
    D d1;
    //cout<<"first "<<d1.getA()<<" second ="<<d1.getB()<<endl;
    d1.input(); 
    d1.print();
    d1.display();
    return 0;
}*/



#include<iostream>
using namespace std;
class B 
{ 
    private://private bane to chaild class me access nahi karsak te bnana honge :
    float a,b;   //public banen to  print main me bhi call kar sakten hain
    public:
    void input()
    {
    cout<<"Enter two number:"<<endl;///bade projcted me getter setter banaen 
    cin>>a>>b;
    }
    float getA()
    {
        return a;
    }
    float getB()
    {
        return b;
    }
};
class D:public B
{
   public:
   float d;
   void print()
   {
    //d=getA()+getB();
    d=10*getA()+getB();
    //cout<<"Sum="<<d;
   }  
   void display()
   {
    cout<<"sum="<<d<<endl;
   }
};
int main()
{
    D d1;
    //cout<<"first "<<d1.getA()<<" second ="<<d1.getB()<<endl;
    d1.input(); 
    d1.print();
    d1.display();
    return 0;
}