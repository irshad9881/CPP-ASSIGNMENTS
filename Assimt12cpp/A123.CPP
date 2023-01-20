#include<iostream>
#include<fstream>
//#include<string.h>
using namespace std;
int main()
{
    string line;
   //char line[1000];
    ofstream  fout;
    ifstream fin;
    fin.open("d:/file/z.tex");
    fout.open("d:/file/z.tex",ios::app);
    if(fout)  //if(fin.is_open())
    {
            //while(1)
            //{             
            //getline(cin,line);
            //if(line=="-1")
            //break;
            fout<<"1.Google:"<<endl;
            fout<<"2.Google:"<<endl;
            fout<<"3.Google:"<<endl;
            fout<<"4.Google:"<<endl;
            fout<<"5.Google:"<<endl;
            fout<<"6.Google:"<<endl;
            fout<<"7.Google:"<<endl;
            fout<<"8.Google:"<<endl;
            fout<<"9.Google:"<<endl;
            cout<<"File creat successful:"<<endl;
    }
    else
    {
            cout<<"File not creat :"<<endl;  
    }
    fout.close();
    fin.close();
    return 0;
}