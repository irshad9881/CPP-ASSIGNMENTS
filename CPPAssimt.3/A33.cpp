#include<iostream>
using namespace std;
class Factorial
{
     private:
     int n;
     int fact;
     public:
     void setN(int x) 
     {
        n=x;
        //cin>>n;  user se lene kelie
     }
     int getN( )
     {
        //cin>>n;
        return n;
     }
     int getfactorial()
     {
           return fact ; 
     }
     void calculatefactorial( )
     {
     int f=1,i;
     if(n<=0)
     {
     fact=1;
     return;
     }
     for(i=1;i<=n;i++)
     {
     f=f*i;
     }
     fact =f;
     }
};
int main()
{     Factorial f1,f2,f3;
      f1.setN(3);
      f2.setN(4);
      f3.setN(5); 
      f1.calculatefactorial();
      f2.calculatefactorial();
      f3.calculatefactorial();
      cout<<"factorial of "<<f1.getN()<<" is "<<f1.getfactorial()<<endl;
      cout<<"factorial of "<<f2.getN()<<" is "<<f2.getfactorial()<<endl;
      cout<<"factorial of "<<f3.getN()<<" is "<<f3.getfactorial()<<endl;
      return 0;
}