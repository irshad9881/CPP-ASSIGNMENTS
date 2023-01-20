  #include<iostream>
  using namespace std;
  class Shape
  { 
    protected :
    double a,b;
    public:
    void setdata(double x,double y)
    { 
        a=x;
        b=y;
    } 
    virtual void display()=0;
  };
  class Square:public Shape
  {
  private:
  double a1;
  public:
  void display()
  {
  a1=a*b;
  cout<<"Area of square      : "<<a1<<endl;
  }
  };
  class Parllelogram:public Shape
  {
  private:
  double a2;
  public:
  void display()
  {
  a2=a*b;
  cout<<"Area of Parellogram : "<<a2<<endl;
  }
  };
int main()
{
    Square s1;
    int d1,d2;
    cout<<"..............................."<<endl;
    cout<<"Enter height and weidth number: "<<endl;
    cout<<"..............................."<<endl;
    cin>>d1>>d2;
    s1.setdata(d1,d2);
    s1.display();
    Parllelogram c1;
    cout<<".............................."<<endl;
    cout<<"Enter height and base number: "<<endl;
    cout<<".............................."<<endl;
    int h,b;
    cin>>h>>b;
    c1.setdata(h,b);
    c1.display();
    cout<<".............................."<<endl;
    return 0;
}