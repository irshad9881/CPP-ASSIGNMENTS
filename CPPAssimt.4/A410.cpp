/*#include<iostream>
using namespace std ;
class Bill
{
   private:

   int  units;
   float b;
   public:
   get()
   {
   return b;
   }
   void calculateBill()
   {
        switch(x<=100)
        {
            case 1: x*1.20;
            {
                case 1: switch(x<=200)
                case 0: 120+(x-100)*2;
                {
                    case 1: switch(x>200);
                    case 0: 320+(x-200)*3;
                } 
            }
        }
       amount =amount;
   }
};*/
#include<iostream>
#include<cstring>
using namespace std ;
class Bill
{
   private:
   int c_No;
   char Name[20];
   int  units;
   double bill;
   public:
   void get()
   {
   cout<<"Enter your No "<<endl;
   cin>>c_No;

   cout<<"Enter your Name "<<endl;
   cin.ignore();
   cin.getline(Name,20);
   //cin>>Name;
   cout<<"Enter units "<<endl;
   cin>>units;
   }
   void input()
   {
    cout<<":::::::::Coustumer detail:::::::::"<<endl;
    cout<<"Coustumer NO.   = "<<c_No<<endl;
    cout<<"Coustumer Name  = "<<Name<<endl;
    cout<<"Coustumer Units = "<<units<<endl;
    cout<<"Coustumer Bill  = "<<bill<<endl;
   }
   void calculateBill()
   {
        if(units<=100)
        { 
        bill=units*1.20;
        }
        else if(units<=200)
        {
        bill=100*1.20+(units-100)*2;
        }
        else
        {
        bill=100*1.20+200*2+(units-200)*3;
        }
   }
};
int main()
{
  Bill b;
  b.get();
  b.calculateBill();
  b.input();
  return 0;
}

