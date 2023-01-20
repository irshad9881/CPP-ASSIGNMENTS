/*#include<iostream>
using namespace std;
class Complex 
{
    private:
    int real;
    int img;
    public:
    void show()
    {
    cout<<"Real="<<real<<"\n"<< "Img="<<img<<endl;
    }
    Complex(int r,int i)
    {
    real=r;
    img=i;
    }
    operator int()                //long() bhi liksakten hia if in don0 ko operload karen to error dega kun ki bh confuse hi:or ese ""embiguti ""
    {            
       cout<<"int() called"<<endl;//if dono ko overload karen but main fun me cout<<(int )c; to humne "explicitly "bata diyya ki int bala  chalo  :
       return (real+img);        /////////important//////////hum cha rahe ki nahi cout<<c; like hi chale to hum ""explicit operator int()""likh den to chalge cout<<c; chne dono overload hon :
    }                             //kunki hum ne compiler ko explicitlty bol diya:ki  int() bala chale jab hum bolen nahi to nihi :
                              
    operator long()
    {
    cout<<"long() called "<<endl;
    return (real+img);
    }
};
int main()
{
    Complex c(100,20);
                                // int x=c;
    cout<<int(c);               //0r  //cout<<x;//or/     //enha hum ne explicitly bola ki int () balaoperator hi chale:          
    // cout<<(int)c;
    // cout<<(long)c;             
    return 0;
}*/
#include<iostream>
using namespace std;
class Complex 
{
  private:
  int r;
  int img;
  public:
Complex(int x,int y)
  {
    r=x;
    img =y;
  }
void setdata(int x,int y)
{
    r=x;
    img=y;
}
Complex()
{

}
explicit operator int()
{ cout<<"Operator lnt()"<<endl;
    return (r+img);
}
 operator long()
{
    cout<<"Operator long()"<<endl;
    return (r+img);
}
};
int main()
{
    Complex c;
    c.setdata(10,20);//two int vlaue hai to do bar int() call horaha parhes
    int x; 
    x=c;
   //cout<<(int)c<<endl;
    //cout<<long(c);
    //cout<<x;
    cout<<c<<endl;
    return 0;
}