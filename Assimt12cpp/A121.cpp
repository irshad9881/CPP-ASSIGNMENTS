#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     ofstream fout;//or we can also make fstream object here//
     fout.open("d:/file/a.text");
     if(fout)
     {
     fout<<"Hello Google:"<<endl;
     cout<<"File is creat successful yes:"<<endl;
     }
     else 
     {
     cout<<"File not creat:"<<endl;
     }
     fout.close();
     return 0;
}