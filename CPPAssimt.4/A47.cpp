/*#include<iostream>//For one varible
using namespace std;
class Counter
{
   private :
   int count ;
   public:
   Counter()
   {
     count=0;
   }
   int getcounter()
   {
    return count;
   }
   void inr_counter()
   {
     count++;
   }

};
int main()
{
    Counter a;
    cout<<"BEFORE INCREMENT"<<a.getcounter()<<endl;
     a.inr_counter();
    cout<<"After increment "<<a.getcounter()<<endl;
    return 0;
}*/
///more then one valiabe;
#include<iostream>
using namespace std;
class Counter
{
   private :
   static int count ;
   public:
   Counter()
   {
   count++;
   }
   int getcounter()
   {
   return count;
   }
};
int Counter::count;
int main()
{
    Counter a,b,c,d;
    cout<<a.getcounter()<<endl;
    return 0;
}