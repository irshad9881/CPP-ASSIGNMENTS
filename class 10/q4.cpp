 #include<iostream>//index operator//
 using namespace std;
 class A
 {
 private:
 int a[10],size=10;
 public:
 void setdata(int in,int b)
 {
    if(in>size)
    {
     cout<<"out of bound: "<<endl;
     exit(0);
    }
    a[in]=b;
 }
 int operator[](int in)
 { if(in>size)
 {
    cout<<"Out of bound:"<<endl;
    exit(0);
 }
 return a[in];
 }
 };
 int main()
 {
    A a;
    a.setdata(1,10);
    cout<<a[1];
    return 0;
 }