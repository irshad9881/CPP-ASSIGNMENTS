#include<iostream>
using namespace std;
class LargeN
{
   private:
   int l;
   public:
   void largenumber()
   {  int a,b,c;
    cout<<"Enter three number :"<<endl;
    cin>>a>>b>>c;
    if(a>b)
    {
             if(a>c)
              cout<<"large number is :"<<a<<endl;
              else
              cout<<"large number is :"<<c<<endl;
    }
     else 
          {
              if(b>c)
               {
                cout<<"Large number is:"<<b<<endl;
                }
               else
                {
                cout<<"Larger numer is :"<<c<<endl;
                }
         
            }
    }
   
};
int main()
{
    LargeN c1,c2,c3;
    c1.largenumber();
    return 0;

}