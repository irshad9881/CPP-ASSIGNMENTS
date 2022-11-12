 #include<iostream>
 using namespace std;
 class Complex
 { 
     private:
     int real;
     int img;
     public:
     void setdata(int x,int y)
     {
     real=x;
     img=y;
     }
     void input()
     {
     cout<<real<<"+"<<img<<"i"<<endl;
     }

};
int main()
{
 Complex c1,c2;
 c1.setdata(10,20);
 c2.setdata(20,30);
 c1.input();
 c2.input();
 return 0;
 }