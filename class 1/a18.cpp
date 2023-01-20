#include<iostream>//   "[]" subcript operator overload:
using namespace std;
class Array
{
  private:
  int a[200];
  const int size=200;
  public:
  Array()
  {
    
  }
  
  void setarray(int n,int index)
  {
    if(index>size)
    {
        cout<<endl<<" array index out of bound expeption "<<endl;
       exit(0);
    }
  a[index]=n;
  }
  void display(int index)
  {
    cout<<a[index]<<endl;
  }
int operator[](int index)
  {
    if(index>size)
    {
        cout<<endl<<" array index out of bound expeption "<<endl;
       exit(0);
    }
    return a[index];
  }

};
int main()
{
    Array b;
    b.setarray(100,100);
    b.display(100);
    cout<<b[100]<<endl;
    return 0;
}