
#include<iostream>
using namespace std;
class Complex
{
  private:
  int real;//
  int img;
  public:
  Complex()
  {
    real=0;
    img =0;
  }
 void setdata(int real,int img)
  {
   this-> real=real;
   this-> img=img;
  }
   friend void operator<<(ostream &os,Complex &c)
  {
    os<<"Enter real "<<c.real<<endl;
  
    os<<"Enter img "<<c.img<<endl;
  }
};
int main()
{
    Complex c1,c2;
    c1.setdata(100,200);
    c2.setdata(30,40);
    //c1.show();
    //c2.show();
    cout<<c1;
    cout<<c2;
    return 0;
}

