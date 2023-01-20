#include<iostream>
using namespace std;
int main()
{
    float a,b;
    float c;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
        throw " hello googole:";
        else if(b==1)
        throw exception();
        else
        throw c=a/b;
    }
    catch(const char *x)
    {
        cout<<x<<endl;
    }
    catch(float x)
    {
        cout<<"r="<<x<<endl;
    }
    catch(...)
    {
        cout<<"Default:"<<endl;
    }
    cout<<"Hello Amazon: "<<endl;
    return 0;
}