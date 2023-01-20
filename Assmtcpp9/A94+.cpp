#include<iostream>///////////IMPORTANT
using namespace std;
class Person
{ 
    public:
    char Name[100];
    char address[100];
    long long phone_no;
};
class Employee:public Person
{
   public:
   int eno;
   char ename[100];
};
class Manager:public Employee
{
 public:
 char disgnation[100];
 char department[100];
 int basicsalary;
 void input()
 { 
    cout<<"Enter detail of manager: "<<endl;
    cout<<"..............................."<<endl;
    cout<<"Enter Employee no : "<<endl;
    cin>>eno;//ENHA GETS BHI USE KARSKATE HAIN
    cout<<"Enter Name: "<<endl;
    cin>>ename;
    cout<<"Enter address: "<<endl;
    cin>>address;
    cout<<"Enter phone_no: ";
    cin>>phone_no;
    cout<<"Enter disinaton: "<<endl;
    cin>>disgnation;
    cout<<"Enter department: "<<endl;
    cin>>department;
    cout<<"Enter basic salary: "<<endl;
    cin>>basicsalary;
 }
};
int main()
{
   int n,temp;
   Manager m[100];
   cout<<"Enter howmany Manager you want: "<<endl;
   cin>>n;
   for(int i=0;i<n;i++)
   {
   m[i].input();
   }
   temp=0;
   for(int i=1;i<n;i++)
   {
     if(m[temp].basicsalary<m[i].basicsalary)///private bnaker get() basicsalary ki jgra likkh sakte hai
     temp=i;
     else 
     temp=0;
   }
   cout<<" Manager with hightest salary: "<<m[temp].basicsalary<<endl;
   cout<<"Manager is: "<<m[temp].ename<<endl;
   return 0;
}