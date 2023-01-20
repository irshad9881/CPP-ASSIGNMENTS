/*#include<iostream>    //:initilizer list://
using namespace std;
class Ilist 
{
  private:
  int x,y;
  public:
  Ilist(int a,int b):x(printf(" 1 \n")),y(printf(" 2 \n"))
  {
    cout<<" 3  \n"<<endl;
  }
  void display()
  {
    cout<<"GOOGLE:="<<x<<" Microsoft:="<<y<<endl;
  }

};
int main()
{
    Ilist I(10 ,20);
    I.display();
    return 0;
}
*/

/*#include<iostream>    //:initilizer list://
using namespace std;
class Ilist 
{
  private:
  int x,y;
  public:
  Ilist(int a,int b):x(a),y(b)
  {
    cout<<"pc call:\n"<<endl;
  }
  void display()
  {
    cout<<"GOOGLE:="<<x<<" Microsoft:="<<y<<endl;
  }

};
int main()
{
    Ilist I(10 ,20);
    I.display();
    return 0;
}
*/
/*#include<iostream>    //:initilizer list://
using namespace std;
class Ilist 
{
  private:
  int x;
  const int y=10;
  public:
  Ilist(int a,int b)
  {
   x=a;
   y=b;
  }
  void display()
  {
    cout<<"GOOGLE:="<<x<<" Microsoft:="<<y<<endl;
  }
  
};
int main()
{
    Ilist I(10 ,20);
    Ilist I2(10,200);
    I.display();
    I2.display();
    return 0;
    }
*/
/*#include<iostream>
using namespace std;
class Ilist
{
   private:
   int x;
   const int y;
   int &z=x; //reference varible me ordinary varible se initilize karna zarori hai nahi to error deta hai
             //but hum in this perticlar case me initilizer list se ksrsakte hain:
   public:
   Ilist (int a,int b):y(b),x(a),z(x)
   {
    
   } 
   void display()
   {
    cout<<"X="<<x<<" y="<<y<<" z="<<z<<endl;
   }
};
int main()
{
    Ilist I(10,20);
    I.display();
    return 0;
}*/
#include<iostream>
using namespace std;
class Google
{
  private:
  int a;
  public:
  Google(int x)
  {
   a=x;
  }
  int getG()
  {
    return a;
  }
};
class Ilist
{
   private:
   int x;
   const int y;
   int &z;
   Google a1;
   public:
   
   Ilist (int a,int b):x(a),y(b),z(x),a1(5)
   {
    
     
   } 
   
   void display()
   {
    cout<<"X="<<x<<" y="<<y<<" z="<<z<<" a1="<<a1.getG()<<endl;
   }
};
int main()
{
    Ilist I(10,20);
    I.display();
    return 0;
}