#include<iostream>
using namespace std;
class Amazon
{
    private:
    int a;
    const int b;//humne cost like bhi b ki value change kar di: because jab const like to bnhi per inisilize karna chenhi inisilizer list se kiya to jaroort nahi
    public:
   // Amazon(){cout<<"dc"<<endl;} const kardiya to eh na chlega error dega
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
{   //Amazon a1(11,11);
    //Amazon a2(12,12);
    Amazon a3(6,6);
    // a1.show();
    //a2.show();
    a3.show();
    return 0;
}