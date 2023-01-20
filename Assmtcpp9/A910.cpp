/*#include<iostream>//multiple inheritance
#include<string.h>
using namespace std;
class Worker
{ 
  protected:
  int code;
  char name[100];
  float salary;
  public:
  Worker()
  {

  }
 // /*Worker(int c,char *n,float s)
 // { 
 //   code=c;
//    strcpy(name,n);//////////////////////////string copy karne ke liye otherwise address copy hoga
//    salary=s;
  //}
 void input1()
  {
    cout<<"Enter worker code :"<<endl;
    cin>>code;
    cout<<"Enter worker name :"<<endl;
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter salary: "<<endl;
    cin>>salary;
  }
   void show1()
   {
    cout<<"Worker code   :"<<code<<endl;
    cout<<"Worker name   :"<<name<<endl;
    cout<<"Worker salary :"<<salary<<endl;
   }
};
class Officer 
{
  protected:
  float DA;
  float HRA;
  public:
  void input2()
  {
    cout<<"Enter DA :"<<endl;
    cin>>DA;
    cout<<"Enter HRA :"<<endl;
    cin>>HRA;
  } 
  void show2()
  {
    cout<<"DA            :"<<DA<<endl;
    cout<<"HRA           :"<<HRA<<endl;
  }
};
class Manager :public Worker,public Officer
{  
    private: 
    float TA;
    float g;
    public:
   // Manager(int c,char *n,float s,float d,float h):Worker(c,n,s),Officer(d,h)///constroctor se
    void cal1()
    {
        TA=salary/10;
        cout<<"TA             :"<<TA<<endl;
    }
    void cal2()
    {
        g=(salary+DA+HRA+TA);
        cout<<"Gross salary   :"<<g<<endl;
    }
};
int main()
{
    Manager m[100];
    int n;
    cout<<"Enter Manager count :"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
    cout<<"Enter worker information for :"<<endl;
    cin>>n;
    cout<<"..............................."<<endl;
    cout<<"..............................."<<endl;
        m[i].input1();
        m[i].input2();
    }
    
    for(int i=0;i<n;i++)
    { 
    cout<<"............................"<<endl;
    cout<<"Manager information :"<<endl;
    cout<<"............................"<<endl;
        m[i].show1();
        m[i].show2();
        m[i].cal1();
        m[i].cal2();
    }
    //constructor call m[i]=manager(c,n,s,d,h);
    return 0;
}
*/
#include<iostream>//multiple inheritance
#include<string.h>
using namespace std;
class Worker
{ 
  protected:
  int code;
  char name[100];
  float salary;
  public:
  Worker()
  {

  }
  Worker(int c,char *n,float s)
  { 
    code=c;
    strcpy(name,n);//////////////////////////string copy karne ke liye otherwise address copy hoga
    salary=s;
  }
 /*void input1()
  {
    cout<<"Enter worker code :"<<endl;
    cin>>code;
    cout<<"Enter worker name :"<<endl;
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter salary: "<<endl;
    cin>>salary;
  }*/
   void show1()
   {
    cout<<"Worker code   :"<<code<<endl;
    cout<<"Worker name   :"<<name<<endl;
    cout<<"Worker salary :"<<salary<<endl;
   }
};
class Officer 
{
  protected:
  float DA;
  float HRA;
  public:
 /* void input2()
  {
    cout<<"Enter DA :"<<endl;
    cin>>DA;
    cout<<"Enter HRA :"<<endl;
    cin>>HRA;
  } */
  Officer()
  {

  }
  Officer( float f1,float f2)
  {
    DA=f1;
    HRA=f2;
  }
  void show2()
  {
    cout<<"DA            :"<<DA<<endl;
    cout<<"HRA           :"<<HRA<<endl;
  }
}; 
class Manager :public Worker,public Officer
{  
    private: 
    float TA;
    float g;
    public:
    Manager(int c,char *n,float s,float d,float h):Worker(c,n,s),Officer(d,h)///constroctor se
    { 
      
    }
    void cal()
    {
        show1();
        show2();
        TA=salary/10;
        cout<<"TA             :"<<TA<<endl;
        g=(salary+DA+HRA+TA);
        cout<<"Gross salary   :"<<g<<endl;
    }
};
int main()
{
   
    int cnt;
    cout<<"Enter Manager count :"<<endl;
    cin>>cnt;
   // cin>>cnt;
    Manager *m1;
    m1=new Manager[cnt];
    for(int i=0;i<cnt;i++)
    { 
    int m;
    cout<<"\n Enter worker information for :"<<i+1<<"\n";
    cin>>m;
    cout<<"..............................."<<endl;
    int c;
    cout<<"Enter worker code :"<<endl;
    cin>>c;
    cout<<"Enter worker name :"<<endl;
    char m2[10];
    cin.ignore();
    cin.getline(m2,10);
    int s;
    cout<<"Enter salary: "<<endl;
    cin>>s;
    int d;
    cout<<"Enter DA :"<<endl;
    cin>>d;
    int h;
    cout<<"Enter HRA :"<<endl;
    cin>>h;
    m1[i]=Manager(c,m2,s,d,h);
    }
    for(int i=0;i<cnt;i++)
    { 
    cout<<"............................"<<endl;
    cout<<"Manager information :"<<endl;
    cout<<"............................"<<endl;
        m1[i].cal();
    }
    //constructor call m[i]=manager(c,n,s,d,h);
    return 0;
}