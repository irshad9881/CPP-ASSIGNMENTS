#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("C:/file/a1.t1",ios::app);
    if(!fout)
    {
        cout<<"File not created";
    }
    else
    {
        cout<<"File created successfully:"<<endl;
        fout<<"Hello Google and amazon or microsoft:";
    }
    fout.close();
    return 0;
}