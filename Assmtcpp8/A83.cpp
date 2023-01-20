#include<iostream>
#include<string>
using namespace std;
int main()
{
    float a,b;
    char op;
    float ans;
    cout<<"................................"<<endl;
    try
    {
    cout<<"Enter First number:"<<endl;
    cin>>a;
    if(a==0)
    throw 0;
    cout<<"Enter operator:"<<endl;
    cin>>op;
    if(op !='+' && op!='-' && op!='*' && op!='/')
    throw op;// charrecter
    cout<<"Enter second number:"<<endl;
    cin>>b;
    cout<<"..............................."<<endl;
    switch(op)
    {  
       case '+': 
       ans=a+b;
       break;
       case '-':
       ans=a-b;
       break;
       case '*':
       ans=a*b;
       break;
       case '/':
       if(b==0)
       throw 0;
       ans=a/b;
       break;
    }
    cout<<a<<" "<<op<<" "<<b<<"="<<ans<<endl;
    }
    catch(const char *m)
    {
        cout<<"Error:"<<m<<endl;
    }
    catch(const int x)
    {
        cout<<"x="<<x<<endl;
    }
    catch(...)
    {
        cout<<"Default exeption():"<<endl;
    }
    cout<<"This is final Result:"<<endl;
    return 0;
}