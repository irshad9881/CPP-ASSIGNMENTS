#include<iostream>
using namespace std;
class Employee
{
  public:
  int emcode;
  char name[100];
  void input1()
 {
    cout<<"Enter employee code: "<<endl;
    cin>>emcode;
    cout<<"Enter employee name: "<<endl;
    cin>>name;
 }
};
class Fulltime: public Employee
{
    public:
    int days;
    float dailyrate;
    int salary;
    void input2()
{
    cout<<"Enter employee days: "<<endl;
    cin>>days;
    cout<<"Enter employee daily rate: "<<endl;
    cin>>dailyrate;
    cout<<"..........................."<<endl;
} 
void show1()
{
    cout<<"Enter employee code: "<<emcode<<endl;
    cout<<"Enter employee name: "<<name<<endl;
    cout<<"No. of days: "<<days<<endl;
    cout<<"employee daily rate :"<<dailyrate<<endl; 
    cout<<"............................"<<endl;
}
void cal1()
{
    salary=dailyrate*days;
    cout<<"Employee salary: "<<salary<<endl;
    cout<<"............................."<<endl;
}  
};
class partltime: public Employee
{
    public:
    int hours;
    float hourrate;
    int salary;
    void input3()
{
    cout<<"Enter employee hours: "<<endl;
    cin>>hours;
    cout<<"Enter employee hours rate: "<<endl;
    cin>>hourrate;
    cout<<".............................."<<endl;
} 
void show2()
{
    cout<<"Enter employee code: "<<emcode<<endl;
    cout<<"Enter employee name: "<<name<<endl;
    cout<<"No. of hours: "<<hours<<endl;
    cout<<"employee  hourrate :"<<hourrate<<endl; 
    cout<<".............................."<<endl;
}
void cal2()
{
    salary=hourrate*hours;
    cout<<"Employee salary: "<<salary<<endl;
    cout<<".............................."<<endl;
}
};
int main()
{      
    int v1=0,v2=0,x,y;
    Fulltime f[100];
    partltime p[100];
    while(1)
    {
       cout<<"1.Accept detail :"<<endl;
       cout<<"2.Display detail :"<<endl;
       cout<<"3.Search employee detail: "<<endl;
       cout<<"4.Quit: "<<endl;
       cout<<"Enter your choise :"<<endl;
       cin>>x;
       switch(x)
       {
        case 1: cout<<"1.Fulltime : "<<endl;
                cout<<"2.parttime : "<<endl;
                cout<<"Enter again choise : "<<endl;
                cin>>y;
                switch(y)
                {
                case 1:
                cout<<"fulltime employe detail:"<<endl;
                f[v1].input1();
                f[v1].input2();
                //f[v1].show1();
                f[v1].cal1();
                v1++;
                break;
                case 2:
                cout<<"Parttime employe detail:"<<endl;
                p[v2].input1();
                p[v2].input3();
                //p[v2].show2();
                p[v2].cal2();
                v2++;
                break;
                }
        case 2: 
             for(int i=0;i<v1;i++)
             {
                f[i].show1();
             }
             for(int i=0;i<v2;i++)
             {
                p[i].show2();
             }
             break;
        case 3:
             int n; 
             cout<<"Enter employee code :"<<endl;
             cin>>n;
             for(int i=0;i<v1;i++)
             {
             if(f[i].emcode==n)
             {
                f[i].show1();
             }
             if(p[i].emcode==n)
             {
                p[i].show2();
             }
            }
            break;
        case 4:exit(0);  
        }
    } 
    return 0; 
}
