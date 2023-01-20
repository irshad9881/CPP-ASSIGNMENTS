/*#include<iostream>    //dollar to rupee //
using namespace std;
class rupee
{
   private:
   float r;
   public:
   rupee()
   {

   }
   rupee(float x)
{
    r=x;
}
operator float()
{
   cout<<"Operator() float() call:"<<endl;
   return r;
}
void display()
{
    cout<<"r="<<r<<endl;
}
};
class dollar
{
    private: 
    int f;
    public:
    void display()
    {
        cout<<"f="<<f<<endl;
    }
    dollar()
    {

    }
      dollar(float y)
      {
        f=y;
      }
     operator int()
      {
        cout<<"int() call:"<<endl;
        return f;
      }
      operator rupee()
      {
        cout<<"rupee( ) call:"<<endl;
        return f*100;
      }

};
int main()
{
    float x=5;
    int y=10;
    
    rupee r1=x;
     r1.display();
     x=(float)r1;
    dollar d=y;
    d.display();
    y=(int)d;
    r1=d;
    r1.display();
    return 0;
}
*/

/*//rupee to dollar//
#include<iostream>
using namespace std;
class dollar;
class rupee
{
    private:
    float r;
    public:
    void display()
    {
    cout<<"r="<<r<<endl;
    }
     rupee()
    {

    }
    rupee(float x)
    {
    r=x;
    }
    
    float get()
    {
    return r;
    }
};
class dollar
{
    private:
    float d;
    public:
    dollar()
    {

    }
    dollar(float y)
    {
        d=y;
    }
    dollar(rupee r)
    {  
       cout<<"Dollar p c call:"<<endl;
        d=r.get()/100.0;
    }
    void display()
    {
        cout<<"d="<<d<<endl;
    }
};
int main()
{   
float  x=100;
    rupee r=x;
    r.display();
    dollar d;
    d=(dollar)r;
    d.display();
    return 0;
}
*/
#include<iostream>
using namespace std;
class rupee
{
   private:
   float r;
   public:
   rupee()
   {

   }
   rupee(float x)
   {
    r=x;
   }
   void display()
   {
    cout<<"Rupee pc call:"<<endl;
    cout<<"r="<<r<<endl;
   }
   float getR()
   {
    return r/100.0;
   }

   
};
class dollar
{
    private:
    float d;
    public:
    dollar()
    {

    }
    dollar(float f)
    {
        d=f;
    }
    void display()
    {
        cout<<"Dollar pc call:"<<endl;
        cout<<"d="<<d<<endl;
    }
    operator rupee()
{
    cout<<"operator rupee() call:"<<endl;
    return d*100.0;
}
dollar(rupee r)
{
    d=r.getR();

}
    
};
int main()
{
    float x=10;
    rupee r=x;//float to rupee
    r.display();
    float y=20; //float to dollar
    dollar d=y;
    d.display();
    r=(rupee)d;//dollar to rupee
    r.display();
    d=(dollar)r;//rupee to dollar
    d.display();
    return 0;
}