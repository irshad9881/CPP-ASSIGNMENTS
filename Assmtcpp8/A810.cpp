#include<iostream>//litil bit confusion 
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
    char nik[10000];
    int d=0,s=0,c=0,i,cp=0,sm=0,sp=0;
    cout<<"Enter Passward name:"<<endl;
    gets(nik);
    try
    {
        if((strlen(nik)>8))
        throw 1;
        for(i=0;nik[i]!='\0';i++)
        {
            if(isdigit(nik[i]))
            d=1;
            if((nik[i]>='0' && nik[i]<='9')||(nik[i]>='a' && nik[i]<='z')||(nik[i]>='A' && nik[i]<='Z'))
            c=1;
            else
            s=1;
            //if(nik[i]>='A'&&nik[i]<='Z')
            //cp=1;
            //else
            //sm=1;
            if(nik[i]==' ')
            sp=1;
        }
        if(d==0)
        throw 2;
        //if(c==0)
        //throw 4;
        if(s==0)
        throw 3;
        if(sp==0)
        throw 5;
        else
        throw 6;
    }
    catch(int x)
    {
        if(x==1)
        cout<<"Sorry, greater than 8 character:"<<endl;
        if(x==2)
        cout<<"not contain digit:"<<endl;
        if(x==3)
        cout<<"Not contain specialcharacter:"<<endl;
        //if(x==4)
        //cout<<"Not contain any character:"<<endl;
        if(x==5)
        cout<<"Not contain space ";
        if(x==6)
        cout<<" correct:"<<endl;
        //exception=1;
    }
    //if(!exception)
    //cout<<"Username is correct:"<<endl;
    return 0; 
}