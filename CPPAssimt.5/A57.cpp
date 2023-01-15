#include<iostream>
using namespace std;
class Fraction 
{
 private :
 long num,deno;
 public:
 void fraction(long int n=0 ,long int d=0)
 {
    num=n;
    deno=d;
 }
    friend void operator>>(istream &in ,Fraction &f)//friend function ko ander bhi define karsakte hain........
    {
    cout<<"Enter numinetor:"<<endl;
    in>>f.num;
    cout<<"Enter denominator:"<<endl;
    in>>f.deno;
    }
    friend void operator<<(ostream &out,Fraction &f)
    {
    out<<f.num<<endl;
    out<<f.deno<<endl;
    }
    Fraction operator++()
    {
      Fraction f;
      f.num=++num;
      f.deno= ++deno;
      return f;
   // return *this;
    }
    Fraction operator++(int)
    {
   // Fraction temp=*this; ......ya
    Fraction temp; 
    temp.num=num++;
    temp.deno=deno++;
    return temp; 
    //return *this;
    }
};
int main()
{
    Fraction f1,f2,f3;
    //cout<<"f1"<<endl;
    //cin>>f1;
    //cout<<"f2"<<endl;
    //cin>>f2;
    cout<<"Enter first fraction :"<<endl;
    cin>>f1;
    cout<<"........................"<<endl;
    cout<<"f1++:"<<endl;
    f1++;
    cout<<f1;
    cout<<"........................."<<endl;
    cout<<"++f1:"<<endl;
    ++f1;
    cout<<f1;
    cout<<"......................."<<endl;
    f2=++f1;
    cout<<"f2==++f1"<<endl;
    cout<<"f1:"<<endl;
    cout<<f1;
    cout<<"f2:"<<endl;
    cout<<f2;
    cout<<"........................."<<endl;
    f2=f1++;
    cout<<"Enter f2=f++ :"<<endl;
    cout<<"f1:"<<endl;
    cout<<f1;
    cout<<"f2:"<<endl;
    cout<<f2;   
    return 0;
}