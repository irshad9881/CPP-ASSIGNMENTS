#include<iostream>
using namespace std;
class Complex
{
  private:
  int r,i;
  public:
  Complex()
  {
    
  }
  Complex(int x,int y)
  {  
    r=x;
    i=y;
  }
  void setdata(int x,int y)
  {
   // r=x;
    //i=y;
    this->r=x;
    this->i=y;
  }
   friend ostream & operator<<(ostream &os,Complex &c)
  {
    os<<"Real "<<c.r<<" Img "<<c.i<<endl;
    return os;
  }
 /* void show()
  {
    cout<<"Real "<<r<<" Img "<<i<<endl;
  }*/
 /*void operator=(Complex &c)//enha new ya malloc ki help se memory allocate nahi karei is le enha free()and if(c1==c2)
 //check karne ki requiredment nahi hai  
  {
    r=c.r;
    i=c.i;
  }*/
  Complex operator=(Complex c)//ynah return  type Complex rahka because c1=c2=c3 chal ske 
  {      
     this->r =c.r;
     this->i=c.i;                //Complex t;            //Complex &c lik sakte hin
      return *this;              //t.r=c.r;
   //isse addres returen ho rha  //t.i=c.i;
                                 //return t; eh liken to sb ki value alg alg print hoge
  }
};
int main()
{
    Complex c1(6,11),c2,c3;

    c2.setdata(4,5);
    //c1.show();
    c3=c2=c1; // assigenment operator overload nahi karte to bhi chelti eh k=line becaue shallow copy to hoti hai;
    //eh tavb jaro karen jab deep copy karen 
    cout<<c1<<c2<<c3;
    //c2=c1;
   // c2.show();
    return 0;
}