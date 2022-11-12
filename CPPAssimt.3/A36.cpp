#include<iostream>
using namespace std;
class Square 
{
   private:
   int n;
   int x;
   public:
   void calculatesquare()
   {
    cout<<"Enter the num."<<endl;
    cin>>n;
    x=n*n;
   cout<<"Square is "<<x<<endl;
   }
}; 

int main()
{   
    Square a1,a2,a3;
    a1.calculatesquare();
    a2.calculatesquare();
    a3.calculatesquare();

    return 0;
}