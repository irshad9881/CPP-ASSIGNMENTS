/*#include<iostream>
#include<cstring>
using namespace std;
bool Email(char *email)
{
         int i;
         int AtOffset=- 1;
         int DotOffset=-1;
         int length=0;
         for(i=0;email[i]!='\0';i++)
         {
         if(email[i]=='@')
         {
            AtOffset=i;
         }
         else if(email[i]=='.')
            DotOffset=i;
            length++;
         }
         if(AtOffset==-1 || DotOffset==-1)
         return 0;
         else if(AtOffset>DotOffset)
         return 0;
         return !(DotOffset>=(length-1));
}     
int main()
{
    char email[1000];
    cout<<"Enter your Email:"<<endl;  
    gets(email);                                                                                                                                                                                   
    try
    {
       if(Email(email))
       cout<<"Valid Email:"<<endl;
    else
        throw 'c';
    }
    catch(const char *m) 
    {
        cout<<"invalid Email is"<<endl;
    }
    catch(int x)
    {
        cout<<"x="<<x<<endl;
    }
    catch(...)
    {
        cout<<"Default exeption():"<<endl;
    }
    cout<<"This is final Result:"<<endl;
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{  int e=0;
    char email[1000];
    cout<<"Enter your email:"<<endl;
    gets(email);
    try
    {
        
        for(int i=0;email[i]!='\0';i++)
        {
        if(email[i] =='@')
        e=1;
        //else
        //e=0;
        }
        if(e==0)
        throw 1;
        throw 2;
        //cout<<"Correct"<<endl;
    }
    catch(int x)
    {
        if(x==1)
        cout<<"Error="<<x;
        if(x==2)
        cout<<"Contain @"<<endl;
        
    }
    catch(const char *m)
    {
        cout<<m;
    }
    catch(...)
    {
        cout<<"Exception:"<<endl;
    }
    return 0;
}