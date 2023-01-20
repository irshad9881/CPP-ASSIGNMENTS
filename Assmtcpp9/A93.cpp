#include<iostream>
using namespace std;
class Base 
{ 
  //  public:
    private:
    int physic;
    int chemistry;
    int english;
    public:
    void input()
    {
    cout<<"Enter three subjects marks:"<<endl;
    cin>>physic>>chemistry>>english;
    }
    int getA()
    {
        return physic;
    }
    int getB()
    {
        return chemistry;
    }
    int getC()
    {
        return english;
    }
};
class Drived1:public Base
{
   //public:
   private:
   int d;
   public:
   void Total()
   {
    d=getA()+getB()+getC();
    //d=physic+chemistry+english;
    cout<<"Total marks ="<<d<<endl;
   }  
   int get()
   {
    return d;
   }
};
class Drived2:public Drived1
{
 //public:
 private:
 float percentage;
 public:
 void display()
 { 
    percentage=get()*100/300;
    cout<<"Percentage %="<<percentage<<"%"<<endl;
 }
};
int main()
{   //Base b;
    //Drived1 d1;
    Drived2 d2;
    d2.input();
    d2.Total(); 
    d2.display();
    return 0;
}