#include<iostream>
using namespace std;
class Complex 
{
  private:
  int real;
  int img;
  public:
  void show()
  {
    cout<<"Real="<<real<<"\n"<<"Img="<<img<<endl;
  }
  Complex(int x)
  {
    real=x;
    img=x;
  }
  Complex()
  {
    
  }
};
int main()
{    int x=5;
    Complex c;
    c=x;
    c.show();
    return 0;
}