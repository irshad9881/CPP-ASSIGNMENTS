 //////////////////////
 ////template///////////
 /*#include<iostream>
 using namespace std;
 template<class T>
 T my(T x,T y)
 {
    return (x>y)?x:y;
 }
 int main()
 {
   
    char c=my<char>('a','b');
    cout<<"max "<<c<<endl;
    return 0;
 }
 */
/*
#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()
{
  array <int,5>a={1,2,3,4,5};
  array<int,5>ar={10,20,30,40,50};
  if(a.empty())
  cout<<"Array is empty:"<<endl;
  else
  cout<<"Not empty:"<<endl;
  cout<<a.size()<<endl;
  cout<<a.max_size()<<endl;
  cout<<"front-"<<a.front()<<endl; 
  cout<<"Back-"<<a.back()<<endl;
  cout<<a[1]<<endl;
  cout<<a.at(2)<<endl;
  cout<<get<3>(a)<<endl;
  a.swap(ar);
  for(int  i=0;i<5;i++)
  cout<<a[i]<<" ";
  cout<<endl;
  for(int i=0;i<5;i++)
  cout<<ar.at(i)<<" ";
  a.fill(0);
  cout<<endl;
  for(int i;i<5;i++)
  cout<<a[i]<<" ";
  return 0;
}
*/
