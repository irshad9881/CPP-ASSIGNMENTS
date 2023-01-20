#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int ID;
class Student 
{
   public:
   int Id;
   string Name;
   int Age;
   string Stream;
   void addstudent()
{
    cout<<"Enter your neme:"<<endl;
    cin.get();
    getline(cin,Name);
    cout<<"Enter your age :"<<endl;
    cin>>Age;
    cout<<"Enter your stream:"<<endl;
    cin>>Stream;
    ID++;
    ofstream fout;
     fout.open("C:/file/student.txt",ios::app);
     fout<<"\n"<<Id;
     fout<<"\n"<<Name;
     fout<<"\n"<<Age;
     fout<<"\n"<<Stream;
     fout.close();
     fout.open("C:/file/ID.txt",ios::app);
     fout<<"\n"<<ID;
     fout.close();
     cout<<"Record is added successfully:"<<endl; 
}
void printallstduent()
{
   ifstream fin;
   fin.open("C:/file/student.text");
   Student s;
   while(!fin.eof())
   {
    fin>>s.Id;
    fin.ignore();
    getline(fin,s.Name);
    fin>>s.Age;
    fin>>s.Stream;
    s.print();
   }
   fin.close();
}
void print()
{
    cout<<"ID"<<Id<<endl;
    cout <<"Name"<<Name<<endl;
    cout<<"Age"<<Age<<endl;
    cout<<"Stream"<<Stream<<endl;
    cout<<"***************"<<endl;
}
} ;
int main()
{ int choice;
    ifstream fin;
    fin.open("C:/file/ID.txt");
    if(!fin)
    {
        cout<<"File not found:"<<endl;
    }
    else
    {
    while(!fin.eof())
        {
        fin>>ID;
        }
    }
 fin.close();
   cout<<"ID = "<<ID<<endl;
    while(true)
    {
          cout<<"Enter your choice"<<endl;
          cout<<"1.Add student "<<endl;
          cout<<"2.print all students "<<endl;
          cin>>choice;
          Student s;
          
        int Id;
        switch(choice)
        {
           case 1:s.addstudent();
           break;
           case 2:s.printallstduent();
           break;
           default:return 0;
        }
    }

    return 0;
}