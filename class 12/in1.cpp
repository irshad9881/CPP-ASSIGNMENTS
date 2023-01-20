#include<iostream>//
using namespace std;
class Amazon
{
    private:
    const int a=11;
    const int b=12;
    public:
    Amazon(){}
   void Amazon1(int x,int y)
    {
        a=x;//error
        b=y;//error
        cout<<"pc call:"<<endl;
    }
    void show()
    {
        cout<<"a=>"<<a<<"\n"<<"b=>"<<b<<endl;
    }
};
int main()
{
    Amazon a1;
    a1.Amazon1(10,20);
    a1.show();
    return 0;
}