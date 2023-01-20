/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   
   ofstream fout;
   fout.open("c:/file/abc.tex");
   if(!fout)
   {
    cout<<"File is not created:"<<endl;
   }
   else
   {
    fout<<"Hello google:"<<endl;
    cout<<"File is created sussesfully:"<<endl;
   }
   fout.close();
   return 0;

} */
//how take data from user//
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream fout ;
   string line;
   fout.open("c:/file/abc.tex",ios::app);
   if(!fout )
   {
    cout<<"File is not created :"<<endl;
   }
   else
   {   while(fout)
   {
     getline(cin,line);
     if(line=="-1")
     break;
     fout<<line;
     fout<<" ";
   }
   }
   fout.close(); 
   ifstream fin;
   fin.open("c:/file/abc.tex",ios::app);
   while(!fin.eof())
   { 
    getline(fin,line);
    cout<<line<<endl;
   }
   fin.close();
   cout<<"Hello Google:"<<endl;
   return 0;
}
