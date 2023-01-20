#include<iostream>
using namespace std;
class FLOAT
{ 
    private:
    float a;
    public:
  FLOAT()
    {

    }
    FLOAT(float f)
    {
        a=f;
    }
    void  setdata(float x)
    {
        a=x;
    }
    void show()
    {
        cout<<"a ="<<a<<endl;
    }
    FLOAT operator+(FLOAT x)
    {
        FLOAT t;
        t.a=x.a+a;
        return t;
    }
   FLOAT operator-(FLOAT x)
    {
        FLOAT f;
        f.a=a-x.a;
        return f;
    }
   FLOAT operator*(FLOAT x)
    {
        FLOAT f;
        f.a=a*f.a;
        return f;
    }
    FLOAT operator/(FLOAT x)
    {
        FLOAT f;
        f.a=a/x.a;
        return f;
    }
    void dis()
    {
        cout<<" ans="<<a<<endl;
    }
};
int main()
{
    FLOAT f1,f2,f3,f4,f5,f6;
  // OR // f1.setdata(200);
    f1=2.5,f2=3.5;//OR//
   //OR // f2.setdata(100);
     f3=f1+f2; 
     f3.dis();
   // f3.show();
   // f3=f1-f2;
   // f3.show();
    //f5=f1*f2;
   // f5.show();
   // f6=f1/f2;
   // f6.show();
    return 0;
}