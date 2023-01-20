#include <iostream>

using namespace std;

class Complex
{
  private:
  int real;
  int img;
  public:
  Complex(int x,int y)
  {
    real=x;
    img =y;
  }
  friend ostream & operator<<(ostream &os,Complex &c)
  {
    os<<"Real="<<c.real<<" img "<<c.img<<endl;
    return os;
  }
   /*friend void operator>>(istream &in,Complex &c)
  {
    cout<<"Enter real "<<endl;
    in>>c.real;
    cout<<"Enter img "<<endl;
    cin>>c.img;
  }*/
};
int main()
{
    Complex c1(10,20),c2(20,30);
    cout<<c1<<c2;
    return 0;
}