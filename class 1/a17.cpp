/*#include<iostream>//" > "operator overload with help of member function
using namespace std;
class  Time 
{
   private:
   int hour;
   int min;
   public:
   Time (int h,int m)
   {
    hour=h;
    min=m;
   }
void display()
    {
    cout<<"Hour "<<hour<<" Min "<<min<<endl;
    }
   int operator>( Time t)//member fun
  {
    if(hour>t.hour)
    {
        return 1;
    }
    else
    {
        if(hour==t.hour)
        {
            if(min>t.min)
                {
                return 1;
                }
            else
                return 0;
        }
        return 0;
    }
  }
};
int main()
{
    Time t1(15,10);
    Time t2(10,20);
    if(t1>t2)
    {
        cout<<"Google"<<endl;
    }
    else
    {
    cout<<"Amazon"<<endl;
    }
    t1.display();
    t2.display();
    return 0;
}
*/
#include<iostream>//" > "operator overload with help of friend function
using namespace std;
class  Time 
{
   private:
   int hour;
   int min;
   public:
   Time (int h,int m)
   {
    hour=h;
    min=m;
   }
void display()
    {
    cout<<"Hour "<<hour<<" Min "<<min<<endl;
    }
friend int operator>( Time ,Time );
};
      int operator>( Time t1,Time t2)//member fun
  {
    if(t1.hour>t2.hour)
    {
        return 1;
    }
    else
    {
        if(t1.hour==t2.hour)
        {
            if(t1.min>t2.min)
                {
                return 1;
                }
            else
                return 0;
        }
        return 0;
    }

  }
  int main()
{
    Time t1(15,10);
    Time t2(10,20);

    if(t1>t2)
    {
        cout<<"Google"<<endl;
    }
    else
    {
    cout<<"Amazon"<<endl;
    }
    t1.display();
    t2.display();
    return 0;
}
