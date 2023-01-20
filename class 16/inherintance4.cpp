#include<iostream>
using namespace std;
class Shap
{
  public:
  virtual void area()=0;//purevirctual function
};
class Rectangle:public Shap
{
  public:
  void area()
  {
    cout<<"Area of rectangle:"<<endl;
  }
};
class Circle:public Shap
{

    public:
    void area()
{
    cout<<" Area of cirlcle:";
}
};
int main()
{ Rectangle r;
  r.area();
  Circle c;
  c.area();
  return 0;


}