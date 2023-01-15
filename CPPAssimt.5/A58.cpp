#include<iostream>
using  namespace std;
class Matrix 
{
 private:
 int a[3][3];
 public:
 void input()
 {
    int i,j;
    cout<<"Enter matrix elements (3*3) :"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<" ";
            cin>>a[i][j];
        }
    }
 }
 void showMatrix()
 {
    int i,j;
    cout<<":::::Matrix is:::::"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<" ";
         cout<<a[i][j];
         cout<<"\t";
        }
        cout<<endl;
    }
 }
void operator-()
 {  
  for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
         a[i][j]=-a[i][j];
        }
    }
 }
};
int main()
{
    Matrix m;
    m.input();
    m.showMatrix();
    -m;
    m.showMatrix();
    return 0;
}