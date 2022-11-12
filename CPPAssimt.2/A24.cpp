#include<iostream>
using namespace std;
class Largest 
{
     private:
     int a,b,c;
     public:
     void setN( ) 
     {
        cout<<"Enther three numbers"<<endl;
        cin>>a>>b>>c;
     }
     void calcultelargest( )
     {
       if(a>b)
       {
             if(a>c)
             cout<<"Largest number:"<<a<<endl;
             else
             cout<<"Largest num is :"<<c<<endl;
       }
    else
       {
         if(b>c)
         cout<<"Largest number is:"<<b<<endl;
         else
          cout<<"Largest number is:"<<c<<endl;
       }
}
};
int main()
{    
     Largest l;
   l.setN();
   l.calcultelargest( );
   return 0;
}