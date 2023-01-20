#include<iostream>
//#include<cstdlib>
//#include<stdexcept>//bad_alloc ke liye
using namespace std;
class Student 
{
  private:
  int rank;
  string name;
  public:
  Student()
  {
  rank =1;
  name="noname";
  }
  Student(string n,int a)
  {
    name=n;
    rank=a;
  }
  void show( )
  {
   cout<<"name="<<name<<endl<<"age ="<<rank<<endl;
  }
  void* operator new(size_t size)
  { 
    void *p;
    p=new size_t;//because operator ka name new hia is le malloc use kar len
    return p;    // size_t like to new use ka sakten hai size only use karen to malloc use karne
  }
  void operator delete(void *p)
  {//isse addres returen ho rha 
     cout<<"Deleted pointer:"<<endl;
     free(p);//beecause operato ka name same he islw free use kr len
  }
};
int main()
{
    Student *s;
    s=new Student("Google",100000);
    s->show();
    delete s;
    return 0;
}