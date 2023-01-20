#include<iostream>//multi level inheritance
#include<stdio.h>
#include<string>
using namespace std;
class Student 
{
 // protected:
  int id;
  char name[100];
  public:
  void input1()
  {
    cout<<"Enter Student Roll No: "<<endl;
    cin>>id;
    cout<<"Enter Student Name: "<<endl;
    //fgets(name,20,stdin);
    //printf("%s ",name);
    cin.ignore();
    cin.getline(name,200);
    // cin>>name;
  }
  void show1()
  {
    cout<<"..........................................."<<endl;
    cout<<"*************STUDENT MARK SHEET************"<<endl;
    cout<<"*************U.P Board Exam 2023***********"<<endl;
    cout<<"..........................................."<<endl;
    cout<<"Student Roll No : "<<id<<endl;
    cout<<"Student Name: "<<name<<endl;    
    cout<<"............................................"<<endl;
  }
};
class StudentExam:public Student
{
  protected:
  int H,E,U,M,S,SO;
  public:
  void input2()
  {
    cout<<"Enter Hinde Marks: "<<endl;
    cin>>H;
    cout<<"Enter English Marks: "<<endl;
    cin>>E;
    cout<<"Enter Urdu Marks: "<<endl;
    cin>>U;
    cout<<"Enter Math Marks: "<<endl;
    cin>>M;
    cout<<"Enter Science Marks: "<<endl;
    cin>>S;
    cout<<"Enter Social Science Marks: "<<endl;
    cin>>SO;
  }
  void show2()
  {
    cout<<"Enter Hinde Marks: "<<H<<endl;
    cout<<"Enter English Marks: "<<E<<endl;
    cout<<"Enter Urdu Marks: "<<U<<endl;
    cout<<"Enter Math Marks: "<<M<<endl;
    cout<<"Enter Science Marks: "<<S<<endl;
    cout<<"Enter Social Science Marks: "<<SO<<endl;
    cout<<"......................................"<<endl;
    cout<<endl<<"Total Marks :"<<(H+E+U+M+S+SO)<<endl;
  }
};
class StudentResult:public StudentExam 
{
  //private:
  float p;
  public:
  void get()
  {
      cout<<endl<<"........................................."<<endl;
            cout<<"Percentage % :"<<(H+E+U+S+SO+M)/6;
      cout<<endl<<"........................................."<<endl;
  }
}; 
int main()
{  
    StudentResult a[1000];
    int n;
    cout<<"Enter no of student you want: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        a[i].input1();
        a[i].input2();
    }
    for(int i=0;i<n;i++)
    {
        a[i].show1();
        a[i].show2();
        a[i].get();
    }
    return 0;
}