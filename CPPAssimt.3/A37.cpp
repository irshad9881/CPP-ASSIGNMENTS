#include<iostream>
using namespace std;
class LargeN
{
   private:
   int a,b,c,max;
   public:
   void setA(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}
int getA()
{
    return a;
}
int getB()
{
    return b;
}
int getC()
{
    return c;
}
int findmax()
{
    return max;
}
 void largenumber()
   {  
    if(a>b)
    {
              if(a>c)
              max=a;
              else
              max=c;
    }
     else 
        {
                if(b>c)
                {
                  max=b;
                }
                else
                {
                  max=c;
                }
         
        }
    }
   
};
int main()
{
    LargeN c1,c2,c3;
    c1.setA(2,4,5);
   c1.largenumber();
   cout<<"max no of  "<<c1.getA()<<" , "<<c1.getB()<<" and "<<c1.getC()<<" is "<<c1.findmax()<<endl;
    return 0;

}