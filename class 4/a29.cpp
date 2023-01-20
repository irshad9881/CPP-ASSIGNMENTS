#include<iostream>//user se  input   
#include<fstream>
using namespace std;
int main()
{    string line;//line is variable to store strring
    ofstream fout;
    fout.open("C:/file/1.text",ios::app|ios::in|ios::out);
    if(!fout)
    {
        cout<<"File not created"<<endl;
    }
    else
    {    
        while(fout)//1 bhi likh sakte hain
        {
          getline(cin,line);
          if(line =="-1")
            break;
        fout<<line;
        fout<<" ";
        }
    fout.close();   
    ifstream fin;
    fin.open("C:/file/1.text");
    while(!fin.eof())
    {
        getline(fin,line);
        cout<<line<<endl;
    }        
    fin.close();
    return 0;
    }
}