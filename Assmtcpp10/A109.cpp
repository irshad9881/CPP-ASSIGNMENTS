/*#include<iostream>
using namespace std;
class Area
{
 private:
 int a,b,A1;
 double x,y,A2,A3;
 public:
 Area()
 {
    
 }
 Area(int a,int b)
 {
  A1=a*b;
 }
 void show1()
 {
    cout<<"Area of Rectangle :"<<A1<<endl;
 }
 Area(double x,double y)
 {
    A2=(x*y)/2;
 }
 void show2()
 {
    cout<<"Area of Right Angle Tringle :"<<A2<<endl;
 }
 Area(double x)
 {
    A3=3.14*x*x;
 }
 void show3()
 {
    cout<<"Arera of Circle :"<<A3<<endl;
 }
};
int main()
{
    Area a1;
    int n;
    cout<<"Enter your choise :"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
        a1=Area(10,20);
        a1.show1();
        break;
        case 2: 
        a1=Area(2.5,2.0);
        a1.show2();
        break;
        case 3:
        a1=Area(5.0);
        a1.show3();
        break;
    }
    ///or  //
  //////////////////  cope define karene kelie  
    switch(1)
    P
    case 1: 
    {
        Area a;//ese scope smagh nahi ata hai  is lye breckt lagana hai

    }
    case 2: 
    {
         Area b;
    }
    return 0;
}
*/


#include<iostream>
#include<math.h>
using namespace std;
class Area
{
 private:
 int a,b;
 double x,y,z,A1,A2,A3;
 public:
 Area()
 {
    
 }
 Area(int a,int b)
 {
  A1=a*b;
 }
 void show1()
 {
    cout<<"Area of Rectangle :"<<A1<<endl;
 }
 Area(double x,double y,double z)
 { 
    double s=(x+y+z)/2.0;
    A2=sqrt(s*(s-x)*(s-y)*(s-z));
 }
 void show2()
 {
    if(A2==0)////a+b>c||b+c>a||c+a>b tringle ki property  sqrt can't negative; 
    cout<<"Invlid input:"<<endl;
    else
    cout<<"Area of Tringle :"<<A2<<endl;
 }
 Area(double x)
 {
    A3=3.14*x*x;
 }
 void show3()
 {
    cout<<"Area of Circle :"<<A3<<endl;
 }
};
int main()
{
    //Area a1,a2,a3;
    int n;
    double a,b,c;
    int x,y;
    while(1)
    {
    cout<<"1. Area of Rectangle:"<<endl;
    cout<<"2. Area of Tringle  :"<<endl;
    cout<<"3. Area of  Circle  :"<<endl;
    cout<<"4. exit             :"<<endl;
    cout<<"Enter your choise   :"<<endl;
    cin>>n;
    if(n==1)
    {
    cout<<"Enter two number:"<<endl;    
    cin>>x>>y;
    Area a1(x,y);
    a1.show1();
    break;
    }
    else if(n==2)
    {
    cout<<"Enter three number:"<<endl;
    cin>>a>>b>>c;
    Area a2(a,b,c);
    a2.show2();
    break;
    }
    else if(n==3)
    {
    cout<<"Enter three number:"<<endl;
    cin>>a;
    Area a3(a);
    a3.show3();
    break;
    }
    else if(n==4)
    exit(0);
    }
    return 0;
}
