#include<iostream>
using namespace std;
class A
{
    private:
    int age,rank;
    public:
    A(){ }//dc
    A(int x,int y)//pc
    {
        age=x;
        rank=y;
    }
    int getAge()
    {
        return age;
    }
    int getRnnk()
    {
        return rank;
    }

};

int main()
{
    A a(10,20);
    cout<<" Age="<<a.getAge()<<" Rank="<<a.getRnnk()<<endl;
    return 0;
}