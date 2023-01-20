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

  }
  /*void setdata(int x,int y)
  {
    real=x;
    img=y;
  }
  void show()
  {
   cout<<"Real "<<real<<"Img"<<img<<endl;
  }*/
  Complex(int x,int y)
  {
    real=x;
    img=y;
  }
  friend ostream& operator<<(ostream &os,Complex &c)
  {
    os<<"Real="<<c.real<<"ing"<<c.img<<endl;
    return os;
  }
  /* friend istream& operator>>(istream &in,Complex &c)
  {
    cout<<"Enter realand img: "<<endl;
    in>>c.real>>c.img;
    return in;
  }*/
 Complex &  operator=(Complex &c)
  {
    //Complex t;
   this->real=c.real;
    this->img=c.img;
    return *this;

  }

};
int main()
{
    Complex c1(2,5),c2,c3;
    //c1.setdata(10,20);
    //c2.setdata(30,40);
    //c1.show();
    //c2.show();
       //cin>>c1>>c2;
       c1=c2=c3;
    cout<<c1<<c2<<c3;
    return 0;
}
