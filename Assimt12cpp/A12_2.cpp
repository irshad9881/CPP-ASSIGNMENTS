#include <iostream>//getline function:
#include <cstring>
#include<fstream>
using namespace std;
int main()
{
    fstream fin,fout;
    fout.open("d:/file/google.text",ios::in|ios::out|ios::trunc);
    if(!fout.is_open())
    {
        cout<<"File is not created :"<<endl;
    }
    else 
    {
        cout<<"File is created succcessfull:"<<endl;
        fout<<"File is created successfull:"<<endl;//write mode in a file :
    }
    fout.close();
    fin.open("d:/file/google.text");//read mode because fin or cin use ho to
    fin.seekg(0,ios_base::beg);
    int c=0;
    string ch;
    while(!fin.eof())
    { fin.get();
      c++;
      cout<<"Char No. : "<<c<<endl;
    }
    cout<<"......................."<<endl;
    cout<<"Total No. of char's : "<<c;
    fin.close();
    return 0;
}