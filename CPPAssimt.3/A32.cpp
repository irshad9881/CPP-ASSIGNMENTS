 #include<iostream>
 using namespace std;
 class Time
 { 
     private:
     int hour;
     int min;
     int sec;
     public:
     void setdata(int x,int y,int z)
     {
      hour=x;
      min=y;
      sec=z;
     }
     void display()
     {
      cout<<hour<<" hr "<<min<<" min "<<sec<<" sec "<<endl;
     }
};
int main()
{
 Time t1;
 
 t1.setdata(3,45,20);

 t1.display();

 return 0;
 }