#include<iostream>
using namespace std;
class Doller
{
  private:
  int r;
  public:
  Doller()
  {

  }
  Doller(int c)
  {
    r=c;
  }
  void display()
  {
    cout<<"doller="<<r;
  }

};
int main()
{   int x=10;
    Doller r;
    r=x;
    r.display();
    return 0;
}