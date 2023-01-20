#include <iostream>//getline function:
#include <cstring>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("d:/file/1.text");
    if(!fin.is_open())
    {
        cout<<"File is not created :"<<endl;
    }
    else 
    {
        cout<<fin.tellg();
        //cout<<fin.tellp();
        //read in a file :
    }
    fin.close();
    return 0;
}