#include<iostream>
using namespace std;
class Array
{
    private:
    int a[100];
    const int size=100;
    public:
     Array()
     {

     }
     void setdata(int n,int index)
     {
        if(index >size)
        {
            printf("Array out of bound:");
            exit(0);
        }
        a[index]=n;
     }
     int operator[](int index)
     {
        if(index>size)
        {
            printf("Array out of bound:");
            exit(0);
        }
        return a[index];
     }
     /*  void display(int index)
     {
     cout<<a[index];
     }*/
};
int main()
{
    Array a1;
    a1.setdata(5,10);
    //a1.display(10);
    cout<<"\n"<<a1[10];
    return 0;
}