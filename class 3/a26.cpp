#include<iostream>//new and delete operator use
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
    Complex *p;
    p=new Complex;
    p->setdata(10,20);
    p->showdata();
    delete p;
    cout<<endl;
}