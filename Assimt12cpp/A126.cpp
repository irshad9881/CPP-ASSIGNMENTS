#include<iostream>//doubt//
#include<fstream>
using namespace std;
int main()
{
      ofstream fout;
      fout.open("d:/file/z.text");
      fout<<"google and amazon";
      fout.close();
      ifstream fin;
      FILE *fr;
      fr=fin.open("d:/file/z.text");
      fin.seekg(0,ios_base::beg);//0 is ASCII Code of null char os we need to wright here (c-1)
      char ch;                  // because here spce is one less than compare to charracter the we write (sp+1)
      int c=0 ,sp=0,l=0;
      while(!fin.eof())
      {  
          fin.get(ch);
          if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
          c++;
          else
          if(ch==' ')
          sp++;
          if(ch=='\n')
          {
            l++;
            sp++;
          }
          ch=
      }
      fin.close();
      cout<<"No of character in string :"<<c-1<<endl;
      cout<<"No of word in string:"<<sp+1<<endl;
      cout<<"No of word in line:"<<l<<endl;
      return 0;
}






























/*#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
       ofstream fout;
       char s[100];
       int c=0;
       fout.open("d:/file/abcd.text");
            if(!fout)
            {
            cout<<"File not creat:"<<endl;
            }
            else 
            { 
                cout<<"File is creat successful:"<<endl;
                cout<<"Enter your string :"<<endl;
                cin>>s;
                for(int i=0;i<strlen(s);i++)
                c++;
                fout<<"NO of character :"<<c<<endl;
                cout<<"No of character :"<<c<<endl;  
            }
      fout.close();
     return 0;
}*/