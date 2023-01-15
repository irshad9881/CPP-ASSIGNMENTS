#include<iostream>
using namespace std;
class Integer 
{
    private :
    int a;
    public:
    void setdata(int n)
    {
    a=n;   
    }
    void showdata()
    {
    cout<<"x= "<<a<<endl;
    }
    Integer operator++()//preincrement operator 
    {
    Integer i;
    i.a=++a;
    return i;
    }
    Integer operator++(int )//postincrement operator 
    {
    Integer i;
    i.a=a++;
    return i;
    }
};
int main()
{
    Integer a1,a2;
    a1.setdata(10);
    a1.showdata();
    a2=++a1;
    a1.showdata();
    a2.showdata();
    cout<<"****************"<<endl;
    a1.setdata(100);
    a1.showdata();
    a2=a1++;
    a1.showdata();
    a2.showdata();
    return 0;
}