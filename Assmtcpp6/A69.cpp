#include<iostream>
using namespace std;
class Integer 
{
  private:
  int x;
  public:
  Integer(int a)
  {
   x=a;
  }
  void setdsata(int a)
  {
    x=a;
  }
  void show()
  {
    cout<<" a ="<<x<<endl;
  }
  operator int()
  {
    cout<<"int() called:"<<x<<endl;
    return x;
  }
};
int main()
{
    int t=5;
    Integer i=t;
    i.show(); 
    t=i;
    return 0;
}