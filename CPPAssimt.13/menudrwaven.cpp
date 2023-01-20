#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class Student
{
   public:
   int id;
   string name;
   int age;
   string stream;
   void addstudent();
   void printallstudent();
   void updatestudent(int id);
   void deletestudent(int id);
   void searchstudent(int id);
   };
   int main()
{   
    int choice;
    while(true)
    {
        cout<<"Enter your choice:"<<endl;
        cout<<"1.addstudent():"<<endl;
        cout<<"2.printallstudent():"<<endl;
        cout<<"3.searchstudent():"<<endl;
        cout<<"4.updatestudent():"<<endl;
        cout<<"5.Deletestudent():"<<endl;
        cin>>choice;
         Student s;
         int id;
        switch(choice)
        {
            case 1: s.addstudent();
                   break;
            case 2: s.printallstudent();
                   break;
            case 3: s.searchstudent(id);
                    break;
            case 4:  s.updatestudent( id);
                    break;
            case 5: s.deletestudent( id);
                       break;
            default:exit(0);
        }
    }
    return 0;
}