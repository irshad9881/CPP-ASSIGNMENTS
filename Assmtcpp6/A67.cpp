/*#include<iostream>
using namespace std;
class Integir
{
  private:
  int a;
  public:
  Integir()
  {

  }
  void input()
  {
    cout<<"Enter your number:"<<endl;
    cin>>a;
  }
 void  show()
  {
    cout<<a<<endl;
  }
 void  operator!()
   {
    if(a>0)
    {
        cout<<"Number is positive intergir:"<<endl;
    }
    else 
    {
        cout<<"NUmber is negative integir:"<<endl;
    }
   }
};
int main()
{
    Integir i;
    i.input();
    i.show();
    !i;
    return 0;
}
*/
#include<iostream>
using namespace std;
class Integer 
{
   private:
   int i;
   public:
   Integer(int i):i(i)//or// insilizer list: 
   {

   }
   /*Integer(int i)
   {
    this->i=i;
   }*/

 //or//
 
 int  operator!()
 {
  return -i;
 }
};
int main()
{
  Integer x=-100;//or x(10);
  cout<<!x;
  return 0;
}