/*#include<iostream>
using namespace  std;
class Base
{
  public:
  Base()
  {
    cout<<"Base parent :"<<endl;
  }
};
class Drive:public Base
{
  public:
  Drive()
  {
    cout<<"Derive of child:"<<endl;
  }
};
int main()
{ 
   Base *b;
   Drive *d;
   Base obj1; 
   Drive obj2;
   b=&obj1;
   d=&obj2;
   b=&obj2;
  // d=&obj1;
   return 0;
}*/
/*#include<iostream>
using namespace std;
class Base 
{  public :
  void print1()
  {
  cout<<"print of base:"<<endl;
  }
};
class Drive :public Base
{
   public :
     void print2()
     {
      cout<<"Print of Drive :"<<endl;
     }
};
int main()
{
  Base *b;
  Drive *d;
  Base b1;
  Drive d1;
  b=&b1;
  d=&d1;
  b=&d1;
  //d=&b1;
  b->print1();
 // b->print2();
  d->print1(); 
  d->print2();
  return 0;
}
*/

/////////////////////////////////////////////////
/*#include<iostream>
using namespace std;
class Base 
{  public :
  void print1()
  {
  cout<<"print of base:"<<endl;
  }
};
class Drive :public Base
{
   public :
   void print1() //function overriding
   { 
    cout<<"Modified of base class:"<<endl;
   }
     void print2()
     {
      cout<<"Print of Drive :"<<endl;
     }
};
int main()
{
  Base *b;
  Drive *d;
  Base b1;
  Drive d1;
  b=&b1;
  b->print1();
  d=&d1;
  d->print2();
  d->print1();
  b=&d1;
  b->print1();
  return 0;
}*/
/////////////////////////////////////////////////
/*#include<iostream>
using namespace std;
class Base 
{  public :
 virtual void print1()
  {
  cout<<"print of base:"<<endl;
  }
};
class Drive :public Base
{
   public :
   void print1() //function overriding
   { 
    cout<<"Modified of base class:"<<endl;
   }
     void print2()
     {
      cout<<"Print of Drive :"<<endl;
     }
};
int main()
{
  Base *b;
  Drive *d;
  Base b1;
  Drive d1;
  b=&b1;
  b->print1();
  d=&d1;
  d->print2();
  d->print1();
  b=&d1;
  b->print1();
  return 0;
}*/


/////////////////////////////////////////////////
/////////////////////////////////////////////////
/////////Best example of virtual function////////
/////////////////////////////////////////////////
/////////////////////////////////////////////////
#include<iostream>
using namespace std;
class MakeMyTrip 
{    public :
     void Search()
     {
      cout<<"search flight by a makemytrip :"<<endl;
     }
    virtual void Book()
     {
     cout<<"Flight book :"<<endl;
     }
};
class AirIndia:public MakeMyTrip
{
   public :
   void Book() //function overriding
   { 
    cout<<"Book flight by a AirIndia:"<<endl;
   }   
};
class Indigo:public MakeMyTrip
{
   public :
   void Book() //function overriding
   { 
    cout<<"Book flight by a Indigo:"<<endl;
   }   
};
/*class XYZ
{
   
};*/
int main()
{
//  MakeMyTrip m;
 // m.Search();
 // m.Book();
  MakeMyTrip *m;
  AirIndia a;
  Indigo i;
  m=&a;
  m->Search();
  m->Book();
  m=&i;
  m->Search();
  m->Book();
  return 0;
}

