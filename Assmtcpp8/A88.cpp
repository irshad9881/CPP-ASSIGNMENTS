#include<iostream>
#include<ctype.h>//nabhi like ton bhi chalega
#include<string.h>
using namespace std;
int main()
{
    char pass[10000];
    int d=0,s=0,c=0,i,cp=0,sm=0;
    cout<<"Enter Passward name:"<<endl;
    gets(pass);
    try
    {
        if((strlen(pass)<6))
        throw 1;
        for(i=0;pass[i]!='\0';i++)
        {
            if(isdigit(pass[i]))
            d=1;
            if((pass[i]>='0' && pass[i]<='9')||(pass[i]>='a' && pass[i]<='z')||(pass[i]>='A' && pass[i]<='Z'))
            c=1;
            else
            s=1;
            if(pass[i]>='A'&&pass[i]<='Z')
            cp=1;
            else 
            sm=1;
            /*if(pass[i]>='a'&&pass[i]<='z')//because 'a' - 'z' ke alaba special chapital letter  digit bhi hote hin to Capital leterr ko ese chek nahi karsakte
             sm=1;
             else
             cp=1;*/
        }
        if(d==0)
        throw 2;
        if(s==0)
        throw 3;
        if(cp==0)
        throw 4;
        else
        throw 5;
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
        cout<<"Not contain capital letter:"<<endl;
        if(x==5)
        cout<<" correct:"<<endl;
        //exception=1;
    }
    //if(!exception)
    //cout<<"Username is correct:"<<endl;
    return 0; 
}