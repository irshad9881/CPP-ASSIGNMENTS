#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ofstream fout;
    ifstream fin1,fin2;
    string line;
    fin1.open("d:/file/1.text");
    fin2.open("d:/file/z.text");
    cout<<"Enter file name with extention :"<<endl;//user se file lena
    getline(cin,line);
    //fout.open("d:/file/a.text");
    fout.open(line);
    if(!fout)
    {
        cout<<"file not exit:"<<endl;
        exit(0);
    }
    string ch;
    while(!fin1.eof())
    {
        //fin1.get(ch);
         getline(fin1,ch);
        /*if(ch>='a'&& ch<='z')
         ch=toupper(ch);
         else if(ch>='A'&& ch<='Z')
         ch=tolower(ch);*/
         fout<<ch;
    }
    while(!fin2.eof())
    {
        //fin2.get(ch);
         getline(fin2,ch);
         fout<<ch;
    }
    cout<<"data copied:"<<endl;
    fin1.close();
    fin2.close();
    fout.close();
    return 0;
}