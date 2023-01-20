#include<iostream>// you can resolve it.
#include<string.h>
//#int
using namespace std;
int main()
{     //int e=0,g=0;
     string email="moirshad588@gmail.com";
      // char email[1000];
       //char gmail[1000];
      string gmail="gmail.com";
    //  cout<<"Enter Email Id:"<<endl;
    //  gets(email);
      //cout<<"Enter gmail :"<<endl;
   //   gets(gmail);
     //try
     //{   
      //  for(int i=0;email[i]!='\0';i++)
     //{
     // if(email[i]!='@')
      //throw 1;
      //e=1;
      if(email.find(gmail)!=-1)
      //g=1;
      cout<<"yes";
      //throw 2;
      else 
      //throw 3;
      cout<<"No";
//}
     //if(e==0)
    // throw 1;
    // if(g==0)
    // throw 2;
    // else
    // throw 3;
   /*  }
     catch(int x)
     {
       // if(x==1)
        //cout<<"not contain @"<<endl;
        if(x==2)
        cout<<"Not contain gmail.com"<<endl;
        if(x==3)
        cout<<"Correct:"<<endl;
     }*/
    return 0;
    
}