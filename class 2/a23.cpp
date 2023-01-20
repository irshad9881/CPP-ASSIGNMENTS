/*#include<iostream>//type casting type 3(1) rupee(ud) to dollar (ud to ud)
using namespace std;
  class Dollar
{ 
    private:
    float d1;
    public:
    Dollar()
    {
        cout<<"DC of dollar:"<<endl;
    }
    Dollar(float y)
    {
         cout<<"pc of dollar:"<<endl;
         d1=y;
    }
    void display()
    {
     cout<<"display of dollar: "<<d1<<endl;
    }
    operator float()
    {
        cout<<"float() of dollar:"<<endl;
        return d1;
    }
    float getD()
    {
        return d1;
    } 
};
class Rupee
{
    private:
    float r1;
    public:
    Rupee()
    {
        cout<<"DC of rupee :"<<endl;
    }
    Rupee (Dollar d)
    {
        cout<<"rupee() of dollar "<<endl;
        r1=d.getD()*100;
    }
    Rupee(float x)
    {
        cout<<"pc of rupee:"<<endl;
        r1=x;
    }
    void display()
    {
     cout<<"display of rupee: "<<r1<<endl;
    }
    operator float()
    {
        cout<<"float() of rupee:"<<endl;
        return r1;
    }
};
int main()
{  
    float p=10;
    Rupee r=p;
    r.display();
    float a;
    a=(float)r;
    cout<<a<<endl;

    float q=20;
    Dollar d=q;
    d.display();
    float b;
    b=(float)d; 
    cout<<b<<endl;
    r=(Rupee)d;
    r.display();
    return 0;
}
*/  

//with the help of type casting operator rupee to dollar

#include<iostream>//type casting type 3(2)  rupee(ud) to  dollar(ud to ud)
using namespace std;
  class Dollar
{
    private:
    float d1;
    public:
    Dollar()
    {
        cout<<"DC of dollar:"<<endl;
    }
    Dollar(float y)
    {
         cout<<"pc of dollar:"<<endl;
         d1=y;
    }
    void display()
    {
     cout<<"display of dollar: "<<d1<<endl;
    }
    operator float()
    {
        cout<<"float() of dollar:"<<endl;
        return d1;
    }
    float getD()
    {
        return d1;
    } 
};
class Rupee
{
    private:
    float r1;
    public:
    Rupee()
    {
        cout<<"DC of rupee :"<<endl;
    }
    Rupee (Dollar d)
    {
        cout<<"rupee() of dollar "<<endl;
        r1=d.getD()*100;
    }
    Rupee(float x)
    {
        cout<<"pc of rupee:"<<endl;
        r1=x;
    }
    void display()
    {
     cout<<"display of rupee: "<<r1<<endl;
    }
    operator float()
    {
        cout<<"float() of rupee:"<<endl;
        return r1;
    }
    operator Dollar()//rupee to dollar
    {
        cout<<"Dollar of rupee "<<endl;
        return r1/100;
    }
};
int main()
{  
    float p=10;
    Rupee r=p;
    r.display();
    float a;
    a=(float)r;
    cout<<a<<endl;

    float q=20;
    Dollar d=q;
    d.display();
    float b;
    b=(float)d; 
    cout<<b<<endl;
    r=(Rupee)d;
    r.display();
    d=r;//rupee to dollar ;
    d.display();
    return 0;
}