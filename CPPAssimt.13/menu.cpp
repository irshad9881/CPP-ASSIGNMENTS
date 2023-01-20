#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int ID;
class Student
{
    public:
    int id;
    string name;
    int age;
    string stream;
    void addstudent( )
    {
     cout<<"Enter your name:"<<endl;
     cin.get();
     getline(cin,name);
     cout<<"Enter your age:"<<endl;
     cin>>age;
     cout<<"Enter your stream:"<<endl;
     cin>>stream;//here we use getline() but strea is alwayse one word so not need of getline();
     ID++;
     ofstream fout ;
     fout.open("d:/file/a.text",ios::app );
     fout<<"\n"<<ID;
     fout<<"\n"<<name;
     fout<<"\n"<<age;
     fout<<"\n"<<stream;
     fout.close();
     fout.open("d:/file/b.text",ios::app);
     fout<<"\n"<<ID;
     fout.close();
     cout<<"Record added sussesfully:"<<endl;
     
    }
     void print()
   {
    cout<<"******************************"<<endl<<endl;
    cout<<"ID= "<<id<<endl;
    cout<<"Name= "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    cout<<"Stream= "<<stream<<endl;
    cout<<"*****************************"<<endl<<endl;
   }
   void printallstudent()
   {
    ifstream fin ;
    Student s;
    fin.open("d:/file/a.text");
    while(!fin.eof())
    {
      fin>>s.id;
      fin.ignore();
      getline(fin,s.name);
      fin>>s.age;
      fin>>s.stream;
      s.print();
    }
    fin.close();
    }
  void updatestudent(int id)// this combination  delete +add 
    {
       deletestudent(id);
        cout<<"Enter your name:"<<endl;
        cin.get();
        getline(cin,name);
       cout<<"Enter your age:"<<endl;
       cin>>age;
       cout<<"Enter your stream:"<<endl;
       cin>>stream;//here we use getline() but strea is alwayse one word so not need of getline();
        ID++;
       ofstream fout ;
       fout.open("d:/file/a.text",ios::app);
     fout<<"\n"<<ID;
     fout<<"\n"<<name;
     fout<<"\n"<<age;
     fout<<"\n"<<stream;
     fout.close();
     fout.open("d:/file/b.text",ios::app);
     fout<<"\n"<<ID;
     fout.close();
     cout<<"Record added sussesfully:"<<endl;
    }

    void deletestudent(int id)
    {     Student s;
          ifstream fin;
          fin.open("d:/file/a.text");
          ofstream fout;
          fout.open("d:/file/st.text",ios::app);//there can not two flie name is same so we make next file s;
           while(!fin.eof())
         {
          fin>>s.id;
          fin.ignore();
          getline(fin,s.name);
          fin>>s.age;
          fin>>s.stream;
          if(s.id!=id)
          {
          fout<<"\n"<<s.id;
          fout<<"\n"<<s.name;
          fout<<"\n"<<s.age;
          fout<<"\n"<<s.stream;
          }
        }
         fin.close();
         fout.close();
         remove("d:/file/a.text");//remove and rename are  file's predefine fnction they can handle file
         rename("d:/file/st.text","d:/file/a.text");
         cout<<"Record deleted sussesfully:"<<endl;
    }
   void searchstudent(int id) 
   { 
    ifstream fin;
    fin.open("d:/file/a.text");
    Student s;
    while(!fin.eof())
    {
      fin>>s.id;
      fin.ignore();
      getline(fin,s.name);
      fin>>s.age;
      fin>>s.stream;
      if(s.id==id)
      {
        s.print();
        break;
      }
    }
    fin.close();
   }

   };
   int main()
{   
    ifstream fin;
    fin.open("d:/file/b.text");
    if(!fin)
    {
        cout<<"File not found:"<<endl;
    }
    else{
    while(!fin.eof())
    {
    fin>>ID;
    }
    }
    fin.close();
    cout<<"ID="<<ID<<endl;
    int choice;
    while(true)
    {
        cout<<"Enter your choice:"<<endl;
        cout<<"1.addstudent():"<<endl;
        cout<<"2.printallstudent():"<<endl;
        cout<<"3.searchstudent():"<<endl;
        cout<<"5.updatestudent():"<<endl;
        cout<<"4.Deletestudent():"<<endl;
        cin>>choice;
        Student s;
        int id;
        switch(choice)
        {
            case 1: s.addstudent();
                   break;
            case 2: s.printallstudent();
                   break;
            case 3:
             cout<<"Enter student id:"<<endl;
             cin>>id;
             s.searchstudent(id);
             break;
             case 4: 
              cout<<"Enter student id:"<<endl;
              cin>>id;
              s.deletestudent( id);
                       break;
              case 5: 
            cout<<"Enter student id:"<<endl;
              cin>>id;
            s.updatestudent( id);
                   break;
            
            default:return 0;
        }
    }
    return 0;
}