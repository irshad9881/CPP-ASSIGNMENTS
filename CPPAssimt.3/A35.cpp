#include<iostream>
using namespace std;
class Reverse 
{
  private:
  int r,n;
  public:
  void setA(int y)
  {
    n=y;
  }
  int getA()
  {
    return n;
  }
  int getReverse()
  {
    return r;
  }
  void calculateReverse()
  {  int rev=0,p;
    while(n!=0)
    {
     p=n%10;
     rev=rev*10+p;
     n=n/10;
    }
    r=rev;
  }
};
int main()
{
    Reverse x;
    x.setA(123);
    x.calculateReverse();
    cout<<"reverse no is "<<x.getReverse()<<endl;
    return 0;
}