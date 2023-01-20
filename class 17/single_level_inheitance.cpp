#include<iostream>
using namespace std;
class Shape
{
 public:
 virtual void Area()=0;
};
class Square :public Shape
{
  public:
 void  Area() 
 {
    cout<<"Area of square :"<<endl; 
 } 
};
int main()
{
    Square s;
    s.Area();
    return 0;
}
