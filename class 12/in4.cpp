#include<iostream>//
using namespace std;
class Amazon
{
    private:
    int a;
    int b;
    public:
    Amazon(){cout<<"dc"<<endl;}
    Amazon(int x,int y):b(a),a(y)
    {
        cout<<"pc call:"<<endl;
    }
    void show()
    {
        cout<<"a=>"<<a<<"\n"<<"b=>"<<b<<endl;
    }
};
int main()
{
    Amazon a(12,11);
    a.show();
    return 0;
}