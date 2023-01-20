#include<iostream>
using namespace std;
class Cordinate 
{ 
    private:
    double a,b,c;
    public:
    Cordinate()
    {
        a=b=c=0;
    }
    Cordinate(double a,double b,double c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
   Cordinate operator,(Cordinate k)
    {
      Cordinate temp;
      temp.a=k.a; //or//k.c;
                  //k.b;
                  //k.a;//reverse print karne ke liye:
      temp.b=k.b;//deep copy  oveload na karen tabi copy hogi but shallo copy hoi to enha to problem nahi =but sting class me pronblem ho ti
      temp.c=k.c;//to bna is operawtor ko overload karna hota
      return temp;
    }
    void show()
    {
        cout<<"a ="<<a<<" b="<<b<<" c="<<c<<endl;
    }
};
int main()
{
      Cordinate c1(100,20,30),c2(1000,200,300),c3,c4(1,2,3);
      c3=(c1,c2);//right most element assigen hota hai:
      c3.show();
      c3=(c2,c1,c4);
      c3.show();
      return 0;

}