#include<iostream>
#include<string.h>
using namespace std;
class Mystring 
{
    private :
    char str[300];
    public:
    void  operator!();
     void input()
     {
        cout<<"MY string is :";
        cin>>str;
     }
     void showstring()
     {
        cout<<str;
     }
    
};
void Mystring ::operator!()
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97&&str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"my string is: "<<str;
}
int mian()
{
  Mystring m;
  m.input();
  cout<<"String is:"<<endl;
  m.showstring();
  !m;
  //m.showstring();
  return 0;
}