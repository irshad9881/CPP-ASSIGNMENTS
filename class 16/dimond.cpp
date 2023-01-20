/*#include<iostream>
using namespace std;
class Google
{
   public:
   void print()
{
    cout<<"Google :"<<endl;
}
};
class Amazon: virtual public Google
{
    public:
    void print()
    {
        cout<<"Amazon:"<<endl;
    }
};
class Microsoft: virtual public Google
{
 public :
 void print()
 {
    cout<<"Microsoft:"<<endl;
 }
};
class Irshad :public Microsoft,public Amazon
{
  public:
  void print()
  {
    Amazon::print();
    Microsoft::print();
    Google::print();
  cout<<"These are all dream:"<<endl;
  }
};
int main()
{
    Irshad i;
    i.print();
    return 0;
}*/

////////////////////////////////////////////////////
#include<iostream>
using namespace std;
class Google
{
public:
int g;
void printG()
{
 cout<<"Google :"<<endl;
}
};
class Amazon:virtual public Google
{
    public:
    int a;
    void printA()
    {
         cout<<"Amazon:"<<endl;
    }
};
class Microsoft:virtual  public Google
{
 public :
 int m;
 void printM()
 {
    cout<<"Microsoft:"<<endl;
 }
};
class Irshad :public Microsoft,public Amazon
{
  public:
  int i;
  void printI()
  { 
  cout<<"YES"<<endl;
  }

};
int main()
{
    Irshad obj;
  //  Amazon a;
    //i1.printA();
    //i1.printM();
    //i1.printG();
///i1.printI();
   // cout<<i1.g;
    cout<<"Size of i1 "<<sizeof(obj);
    return 0;
}
