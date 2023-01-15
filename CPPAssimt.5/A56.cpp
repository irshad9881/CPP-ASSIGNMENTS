#include<iostream>
#include<cstring>
using namespace std;
class Cstring 
{
  private :
  char str[50];
  public:
  void input()
  {
    cout<<"Enter your string :"<<endl;
    cin>>str;
  }
  void display()
  {
    cout<<"string is :"<<str<<endl;
  }
  Cstring operator+(Cstring &x)
  {
    Cstring a;
    strcpy(a.str,str);
    strcat(a.str,x.str);
    return a;
  }
   int operator==(Cstring &t);//becacuse cstring class pahle  se define hai isle uska refrence banegen as "&t"
};
int Cstring::operator==(Cstring &t)//member fun ko bahar define kiya
{    
  for(int i=0;str[i]!='\0';i++)
  {
    for(int j=0;t.str[j]!='\0';j++)
    {
      if(str[i]==t.str[j])
      {
        return 1;
      }
      else
      {
        return 0;
      }
    }
  }
  return 0;
}
int main()
{
    int result=0;
    Cstring s1,s2,s3;
    s1.input();
    s2.input();
     cout<<"first string :"<<endl;
    s1.display();
    cout<<"Second string :"<<endl;
    s2.display();
    s3=s1+s2;
    cout<<"Con string"<<endl;
    s3.display();
    if(s1==s2)//operator == se hai eh 
    cout<<"Both string are equal:"<<endl;
    else
    cout<<"Both are not equal:"<<endl;
    return 0;
}
