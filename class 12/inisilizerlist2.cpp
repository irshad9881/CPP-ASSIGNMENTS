#include<iostream>//
using namespace std;
class Amazon
{
    private:
    int a,b;
    public:
    Amazon(){cout<<"dc"<<endl;}
    Amazon(int x,int y):a(x),b(a)
    {
    cout<<"pc"<<endl;
    }
    void show()
    {
        cout<<"a=>"<<a<<"\n"<<"b=>"<<b<<endl;
    }
};
int main()
{
    Amazon a(12,6);
    a.show();
    return 0;
}