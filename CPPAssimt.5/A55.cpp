#include<iostream>
using namespace std;
class Numbers 
{
    private:
    int  x,y,z;
    public:
    void input()
    {
        cout<<"Eneter first number :"<<endl;
        cin>>x;
        cout<<"Enter second number :"<<endl;
        cin>>y;
        cout<<"Enter third number :"<<endl;
        cin>>z;
    }
    void display()
    {
        cout<<" "<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
   void operator-()
    {
      x=-x;
      y=-y;
      z=-z;
    }
};
int main()
{
    Numbers num;
     num.input();
     cout<<"Numbers are :"<<endl;
     num.display();
     -num;
     cout<<"negated njumbers:"<<endl;
     num.display();
     return 0;
}