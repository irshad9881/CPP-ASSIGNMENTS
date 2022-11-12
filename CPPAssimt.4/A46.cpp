#include<iostream>
using namespace std;
class Student
{
   private:
   int marks;
   char grade;
  const  char* Name;
   public:
Student(int x,char y, const char* z)
   {
      marks=x;
      grade=y;
      Name=z;
   }
   void display()
   {
   cout<<"marks "<<marks<<endl;
   cout<<"grade "<<grade<<endl;
   cout<<"Name "<<Name<<endl;
   }

};
int main()
{
  Student s1(520,'A',"IRSHAD"),s2(520,'B',"AZEEM");
  cout<<"FIRST Student "<<endl;
  s1.display();
  cout<<"Second Student "<<endl;
  s2.display();
  return 0;
}