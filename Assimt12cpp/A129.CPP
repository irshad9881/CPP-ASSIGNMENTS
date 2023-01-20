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
        fout<<"File is created successfull:"<<endl;//write in a file :
    }
    fout.close();
    return 0;
}