#include<iostream>
using namespace std;
class Complex 
{
  private:
  int a,b;
  public:
  void display()
  {  
    cout<<a<<"+"<<b<<"i"<<endl;
  }
  void input()
  {
    cout<<"Enter your numbers ::"<<endl;
    cin>>a>>b;
  }
 Complex operator+(Complex a2)//as member
 {
  Complex t;
  t.a=a+a2.a;
  t.b=b+a2.b;
  return t;
 }
 //friend Complex operator+(Complex ,Complex );//as freiand 
   friend Complex operator-(Complex ,Complex );
   friend Complex operator*(Complex ,Complex );
   friend bool operator==(Complex,Complex );
};
/*Complex operator+(Complex a1,Complex a2)///friend function
{
  Complex t;
  t.a=a1.a+a2.a;
  t.b=a1.b+a2.b;
  return t;
}*/
Complex operator-(Complex a1,Complex a2)
{
  Complex t;
  t.a=a1.a-a2.a;
  t.b=a1.b-a2.b;
  return t;
}
Complex operator*(Complex a1,Complex a2)
{
  Complex t;
  t.a=((a1.a)*(a2.a))-((a1.b)*(a2.b));
  t.b=((a1.a)*(a2.b))+((a1.b)*(a2.a));
  return t;
}
bool operator==(Complex m,Complex n)
  {
    if(m.a==n.a)
    {
      return 1;
    }
   else
    {
      return 0;
    }
  };
   int main()
{
   Complex a1,a2,a3,a4,a5;
   // a1.setdata(5,10);
   // a2.setdata(5,20);
   a1.input();
   a2.input();
   a3=a1+a2;   //as a mem or non mem ,,,,a1 ne + operator ko kol kiya a2 as an argument pass hua + ne return kiya boh a3 me assign kiya
   //a3=a1.operator+(a2);//as a member  or non mem       ,,,,     ,,,,
   a4=a1-a2;
   a5=a1*a2;
   cout<<"enter values "<<endl<<endl;
   a1.display();
   a2.display();
   a3.display();
   a4.display();
   a5.display();
   if(a1==a2)
   {
    cout<<"Both are equal:"<<endl;
   }
   else
   {
    cout<<"Both are not equal:"<<endl;
   }
   return 0;
}