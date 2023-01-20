#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    string l;
    fout.open("d:/file/a123.text");
    if(!fout)
    {
        cout<<"file is not created :"<<endl;
    }
    else
    {  while(fout)
    {   //cin.ignore();
        cout<<"Enter now:"<<endl;
        getline(cin,l);
        if(l=="-1")
        fout<<"File is created successful1:"<<l<<endl;   
        cout<<"File is created successful1:"<<l<<endl;
    }
    }
    fout.close();
    ifstream fin;
    fin.open("d:/file/a123.text");
    fin.seekg(1,ios::beg);
    if(!fin)
    {
        cout<<"file is not open :"<<endl;
    }
    else
    {
        while(!fin.eof())
        {
         cin.ignore();
         getline(fin,l);
         if(l=="-1")
         break;
         fin>>l;
         cout<<"File is created successful2:"<<l<<endl;
        }
    }
    fin.close();
    return 0;
}