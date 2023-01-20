#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    char user[100];
    int isDigit=0,s=0,c=0,i,exception=0;
    cout<<"Enter user name:"<<endl;
    gets(user);
    try
    {
        if((strlen(user)<6))
        throw 1;
        for(i=0;user[i]!='\0';i++)
        {
            if(isdigit(user[i]))
            isDigit=1;
            if((user[i]>='0' && user[i]<='9')||(user[i]>='a' && user[i]<='z')||(user[i]>='A' && user[i]<='Z'))
            {
            c=1;
            }
            else
            {
            s=1;
            }
        }
        if(isDigit==0)
        throw 2;
        if(s==0)
        throw 3;
        else
        throw 4; 
    }
    catch(int x)
    {
        if(x==1)
        cout<<"Not 6 character:"<<endl;
        if(x==2)
        cout<<"not contain digit:"<<endl;
        if(x==3)
        cout<<"Not contain specialcharacter:"<<endl;
        if(x==4)
        cout<<"Correct:";
        //exception=1;
    }
   // if(!exception)
   // cout<<"Username is correct:"<<endl;
    return 0; 
}