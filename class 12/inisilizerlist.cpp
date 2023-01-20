#include<iostream>//
using namespace std;
class Amazon
{
    private:
    int a,b;//enha jo pahle bna hai to inisilizer list me pahle bhi chlega(note only inisilezer list me con ke body me bla bad me hi caheliga chnhe bo bna pahle ho oper) jo enha bna hai or usme hum kya aasin kiya main ki value to bhi print hogi or hum "b" assin kardiya to rh to bna nahi phir output me error dega: or hum chlana chhen to ise pahle likhen
    public:
    Amazon(){cout<<"dc"<<endl;}
   /* Amazon(int x,int y)
    {
        a=x;
        b=y;
    }*/
     Amazon(int x,int y):a(x),b(y)
    {
        a=x;
        b=y;
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