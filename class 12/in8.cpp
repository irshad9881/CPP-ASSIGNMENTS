#include<iostream>
using namespace std;
class Amazon
{
    private:
    int a;
    const int b;
    int &c=a;
    public:
    Amazon(int x,int y):b(a)//b me garbeg dega kunki con ke ander ka bad me chle ga "a" to usme abhi garbeg ha to "b" me bhi garbeg dega
    {
        a=x;         ///con ke body ka bad me hi chlega chhe bna pahle kiun na ho
        c=a;
        cout<<"pc call:"<<endl;
    }
    void show()
    {
        cout<<"a=>"<<a<<"\n"<<"b=>"<<b<<endl;
    }
};
int main()
{
    Amazon a2(11,12);
    Amazon a3(6,6);
    a2.show();
    a3.show();
    return 0;
}