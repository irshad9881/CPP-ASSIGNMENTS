#include<iostream>
using namespace std;
int main()
{
    try
    {
     throw 'a';
    }
    catch(int x)
    {
        cout<<"Google :"<<x<<endl;
    }
    catch(...)
    {
        cout<<"Default Exception :"<<endl;
    }
    cout<<"Hellow Amazon :"<<endl;
    return 0;
}