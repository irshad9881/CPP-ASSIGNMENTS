#include<iostream>
using namespace std;
class Matrix
{
  private:
  int a[2][2],i,j,d=0;
  public:
  void input()
  {     cout<<"Enter number of matrix: "<<endl;
        for(i=0;i<2;i++)
        {
        for(j=0;j<2;j++)
        cin>>a[i][j];
        }
        cout<<".........................."<<endl;
        for(i=0;i<2;i++)
        {
        for(j=0;j<2;j++)
        cout<<a[i][j]<<"\t";
        cout<<endl<<endl;
        }
        cout<<"..........................."<<endl;
  }
  void show()
  {
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
       d=(((a[0][0])*(a[1][1]))-((a[0][1])*(a[1][0])));
    }
  }
  cout<<"Determination ="<<d<<endl;
  }
};
int main()
{
    Matrix m;
    m.input();
    m.show();
    return 0;
}