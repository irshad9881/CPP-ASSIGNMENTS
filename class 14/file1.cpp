#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("d:/file/a123.text");
    if(!fout)
    {
        cout<<"file is not created :"<<endl;
    }
    else
    {
        fout<<"File is created successful:"<<endl;
        cout<<"File is created successful:"<<endl;
    }
    fout.close();
    return 0;
}