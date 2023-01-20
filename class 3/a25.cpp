#include<iostream>//object pointer 
using namespace std;
class Complex
{
    private:
    int a,b;
    public:
   void setdata(int x,int y)
    {
       a=x;
       b=y;
    }
    void showdata()
    {
        cout<<"real= "<<a<<" img= "<<b;
    }
};
    void inputdata(Complex *p)
    {
        int x,y;
        cout<<"Enter real end img number:"<<endl;
        cin>>x>>y;
        p->setdata(x,y);
    }
int main()
{
    Complex c1;
    inputdata(&c1);
    c1.showdata();
    cout<<endl;
}