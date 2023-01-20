#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin;
    fin.open("d:/file/1.text");
    fout.open("d:/file/a.text");
    char ch;
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch>='a'&& ch<='z')
         ch=toupper(ch);
         else if(ch>='A'&& ch<='Z')
         ch=tolower(ch);
         fout<<ch;
    }
    cout<<"data copied:"<<endl;
    fin.close();
    fout.close();
    return 0;
}