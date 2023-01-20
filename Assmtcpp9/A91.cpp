
#include<iostream>
#include<cstring>
using namespace std;
class Persion
{
  private://when display function se karen to private se nahi goga protected or public karna hoaga
  string name;//or //char name[100]; 
  int age;
  public://enha private bana sakte ha besause hum ne geter and setter function to public bnaehen bana en hai to eh bhi access ho jaengen
  void setName(string n) //or void setName(char *n)
  {                         //{ 
        name=n;
  }                             //  strcpy(name,n);  //deepcopy
                                  //name=n;     //shallow copy ese na karen eh galat hai
                             //}
  void setAge(int a )
  {
    age=a;
  }
   string getName()//or//char* getName() //enha return type pointer rakha because hum array ka base address return karrahe hai and addres ek pomnter variable se access ho sakta hai
  {                 //{
   return name;      //return name;
  }                  //}
  int getAge()
  {
    return age;
  }
};
class Employee:public Persion
{
  public:
  int Emplid;
  int salary;
  Employee()
  {

  }
  void setEmplid(int i)
  {
     Emplid=i;
  }
  void setSalary(int s )
  {
    salary=s;
  }
   int getEmolid()
  {
    return Emplid;
  }
  int getSalary()
  {                      
    return salary;       
  }          
 /* void display()
  {                      
    cout<<" name="<<name<<" age ="<<age<<" empid ="<<Emplid<<"salary="<<salary<<endl;      ///ese employ class me es lie banaya because enha per hum sare variable ko access kar skate hain
  }*/
};
int main()
{   Employee e;
    Persion p;
    e.setAge(22);          //e.setAge(22); emply class sbhi ko access karsakti hai
    e.setName("Irshad");   //e.setName("irshad");
    e.setEmplid(1);
    e.setSalary(3600000);
    cout<<"Enter name"<<endl;
    ///or//e.display();
    cout<<"Name="<<e.getName()<<",Age="<<e.getAge()<<endl; //  cout<<e.getName()<<" "<<e.getAge()<<
    cout<<"ID="<<e.getEmolid()<<",salary="<<e.getSalary()<<endl;
    return 0;
}
