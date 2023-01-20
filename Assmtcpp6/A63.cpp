#include<iostream>
using namespace std;
class Array
{
  private:
  int a[100];
  const int size=100;
  public :
  Array()
  {

  }
  void setdata(int n ,int index)
  { 
    if(index>size)
    {
        cout<<"Array index out of bound:"<<endl;
        exit(0);
    }
    a[index]=n;
  }
  /*void display(int index)
  {
    cout<<a[index]<<endl;
  }*/
 int  operator[](int index)
  {
    if(index>size)
    {
        cout<<"Array out of bound:"<<endl;
        exit(0);
    }
     return a[index];
  }
  ~Array() 
  {

  }
};
int main()
{
    Array a1,a2;
   a1.setdata(20,40);
    //a1.display(40);
    cout<<a1[40];//because eh int type ki value ko print karna janta hia or hum []operator se int type ki value ko hi return kar rahemn hai
    return 0;   
 //or//a1.operator[](40);*/


/*
int i;
for(i=0;i<=100;i++)
{
    a1.setdata(100*(i+1),i);
}
for(i=0;i<=100;i++)
{
    cout<<a1[i]<<" ";
}
*/


return 0;
}