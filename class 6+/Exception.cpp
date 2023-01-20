/*#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter your number:";
    cin>>a>>b;
    try
    {
        if(b==0)
        throw b;
        c=a/b;
    }
    catch(int x)
    {
        cout<<"Invalid num"<<endl;
    }
    cout<<"Every thing is OK:"<<endl;
    return 0; 
}
*/
/*#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter your number:";
    cin>>a>>b;
    try
    {
        if(b==0)
         throw b;
       
        if(b==1)
        throw "Error \n";
         
          if(b==2)
          throw exception();
          c=a/b;
    }
    catch(int x)
    {
        cout<<"Invalid num\n"<<endl;
    }
    catch(const char *str)
    {
        cout<<str;
    }
    
    catch(...)
    {
        cout<<"I don't no what's problem:\n"<<endl;
    }
    cout<<">>>>>>>>>> :This is your conclusion :>>>>>>>>>>>>  "<<endl;
    return 0; 
}*/
#include<iostream>
using namespace std;
void fun()
{
     throw 0;
}
int main()
{
    int b=0;
    try
    {
          if(b==0)
          fun();
          if(b==1)
          throw "Error \n";
          if(b==2)
          throw exception();
          c=a/b;
    }
    catch(int )//her there is not neserrary for return "int x" only "int "is suficient for type matching 
    {
        cout<<"Invalid num\n"<<endl;
    }
    catch(const char *str)
    {
        cout<<str;
    }
    
    catch(...)
    {
        cout<<"I don't no what's problem:\n"<<endl;
    }
    cout<<">>>>>>>>>> :This is your conclusion :>>>>>>>>>>>>  "<<endl;
    return 0; 
}