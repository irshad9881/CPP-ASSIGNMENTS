#include<iostream>
using namespace std;
class Marks
{
  private:
  int a;//intnase varible
  public:
  Marks(int x)
  {
   a=x;
  }
 void print()
  {
    cout<<"a ="<<a<<endl;
  }
  Marks* operator->()
  {
    return this;
  }
};
int main()
{
    Marks m1(1000);
    m1.print();//dot operator
    m1->print();//arrow operator
    return 0;
}




// Arrow opperator use case :
/*#include<iostream>
using namespace std;
class Shape
{
    private:
    float area;
    public:
    void setArea(float a)
    {
        area = a;
    }
    void display()
    {
        cout<< "Area =" << area<< endl;
    }
};
class Circle
{
    private:
    Shape s;
    float radius;
    public:
    void setRadius(float r)
    {
        radius = r;
    }
    void findArea()
    {
        s.setArea(3.14 * radius * radius);
    }
    Shape* operator->()
    {
        return &s;
    }
};
int main()
{
    Circle c1;
    c1.setRadius(5);
    c1.findArea();
    c1->display();
    return 0;
}*/