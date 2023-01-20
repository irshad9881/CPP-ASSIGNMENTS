
#include<iostream>
using namespace std;
class Complex
{
  private:
  int real;
  int img;
  public:
  Complex()
  {
    real=0;
    img =0;
  }
 /**void setdata(int x,int y)
  {
    real=x;
    img=y;
  }*/
  friend void operator<<(ostream &os,Complex &c)
  {
    os<<"Real="<<c.real<<endl;
    os<<"Img="<<c.img<<endl;
  }
   friend void operator>>(istream &in,Complex &c)
  {
    cout<<"Enter real "<<endl;
    in>>c.real;
    cout<<"Enter img "<<endl;
    cin>>c.img;
  }
};
int main()
{
    Complex c1,c2;
    //c1.setdata(10,20);
    //c2.setdata(30,40);
    //c1.show();
    //c2.show();

     cin>>c1;
     cin>>c2;

    cout<<c1;
    cout<<c2;
   
    return 0;

}

