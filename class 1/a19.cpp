#include<iostream>   //exception handling:
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 2 number"<<endl;
    cin>>a>>b;
    try
    {
          if(b == 0) 
          throw"Inavlid Input ERROR";
          if(b == 1) 
          //throw"Inavlid Input 1";//1
          throw b ;
          if(b == 2)
          throw exception();
          c = a/b;
    }catch(const char* msg)
          {
          cout<<msg<<endl;
          }catch(int x)
                  {
                  cout<<"yes  "<<x<<endl;
                  }catch(...)
                        {
                        cout<<"No problem"<<endl;
                        }
    cout<<"result "<<c;
    return 0;
}