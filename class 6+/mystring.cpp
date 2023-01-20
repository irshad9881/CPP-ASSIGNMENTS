#include<iostream>
#include<cstring>
using namespace std;
class Mystring 
{
  private:
  char* a;
  int size;
  public:
  Mystring ()
  {
    cout<<"Default con is called"<<endl;
    a=(char*)malloc(1);
    size =1;
  }
  Mystring(char const *str)
  {
    cout<<"Paramaeterized con is called:"<<endl;
     size=strlen(str);
    a=(char*)malloc(size+1);

    strcpy(a,str);
  }
  void display()
  {
    cout<<"\n"<<a;
  }
  Mystring(const Mystring &s)
  {
   cout<<"Copy constroctor is called :"<<endl;
   size=strlen(s.a);
   a=(char*)malloc(size+1);
   strcpy(a,s.a); 
  }
  void change(char const *str)
  {
    free(a);
    size=strlen(str);
    a=(char*)malloc(size+1);
    strcpy(a,str);
  }
  Mystring & operator=( Mystring &s)     //= operator predefine hai eh integer ya predefine chejon ko assin karna janta hai to s3=s1;                                  //me refene ko assign karta hi naki sting ko islie hum = operator me assigenment operator ka use karte hai isle return bhi reference karya or ()me bi refrencw receive kiya
 {   
     cout<<"Assigenment operator call:"<<endl;//jab m3=m1 lote hia to ynha rafrence copy hota hi assin hota hai ;is le = op. me & kea use karte haim;
    if(a==s.a)
    {
        return s;
    }
    free(a);
    size =strlen(s.a);
    a=(char*)malloc(size+1);
    strcpy(a,s.a);
    return *this;
  }


};
int main()
{
    Mystring m1("Irshad");
    Mystring m2=m1;
    Mystring m3,m5;
    m3=m1;
    Mystring m4("Azeem");
    m4=m1;
    m1=m1;
    m5=m4=m1;
    m1.change("Tauheed");
    m1.display();
    m3.display();
    m2.display();
    m4.display();
    m5.display();
    return 0;
}