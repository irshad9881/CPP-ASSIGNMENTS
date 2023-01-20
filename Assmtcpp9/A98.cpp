#include<iostream>
using namespace std;
class Customer
{
    
    char name[100];
    long long phoneno;
    public:
     void input1()
     {
        cout<<"Enter customer name: "<<endl;
        cin.ignore();
        cin.getline(name,100);
        //cin>>name;
        cout<<"Enter customer phone: "<<endl;
        cin>>phoneno;
     }
     void show1()
     {
        cout<<endl<<" :Detail  of coustomer: "<<endl;
        cout<<".............................."<<endl;
        cout<<"Customer name: "<<name<<endl;
        cout<<"Customer phoneno: "<<phoneno<<endl;
     }
};
class Depositor:public Customer
{
    
    long long accno;
    double balance;
    public:
     void input2()
     {
        cout<<"Enter customer A/c No : "<<endl;
        cin>>accno;
        cout<<"Enter customer Balance: "<<endl;
        cin>>balance;
        cout<<"...................................."<<endl;
     }
     void show2()
     {
        cout<<"Customer A/c No : "<<accno<<endl;
        cout<<"Customer Balance: "<<balance<<endl;
        cout<<"...................................."<<endl;
     }
};
class Borrower: public Depositor 
{
    
    int loan_no;
    long long loan_amount;
    public:
     void input3()
     {
        cout<<"Enter customer lona no: "<<endl;
        cin>>loan_no;
        cout<<"Enter customer loan_amount: "<<endl;
        cin>>loan_amount;
     }
     void show3()
     {
        cout<<".................................."<<endl;
        cout<<"Customer loan no: "<<loan_no<<endl;
        cout<<"Customer loan_amount: "<<loan_amount<<endl;
        cout<<".................................."<<endl;
     }
};
int main()
{
  //  Borrower b[100];
    Borrower *b;
    int n;
    cout<<"Enter no of coustomer detail you want :"<<endl;
    cin>>n;
    b=new Borrower[n];
    cout<<"......................................"<<endl;
    for(int i=0;i<n;i++)
    {
        b[i].input1();
        b[i].input2();
        b[i].input3();
    }
      for(int i=0;i<n;i++)
    {
        b[i].show1();
        b[i].show2();
        b[i].show3();
    }
    return 0;
}