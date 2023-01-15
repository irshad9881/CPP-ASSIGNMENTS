#include<iostream>//persion class similar
using  namespace std;
class Matrix 
{
  private:
  int a[10][10];
  int r,c;
  public:
  void input();
  void showMatrix();
  Matrix operator+(Matrix  );
  Matrix operator-(Matrix );
  int operator==(Matrix  );
  friend ostream & operator<<(ostream &,Matrix &);
};
void Matrix:: input()
{
 
    cout<<":##########Enter row and coloum ###########:"<<endl;
    cin>>r>>c;
    cout<<":**********Enter matrix elements **********:"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
 }
Matrix Matrix:: operator+(Matrix x)
 {    
   // int b[10][10];
    Matrix t;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          t.a[i][j]=a[i][j]+x.a[i][j];
        }
        t.r=r;
        t.c=c;
    }
    return t;
 }
 Matrix Matrix:: operator-(Matrix x)
 {    
   // int b[10][10];
    Matrix t;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          t.a[i][j]=a[i][j]-x.a[i][j];
        }
        t.r=r;
        t.c=c;
    }
    return t;
 }
int Matrix::operator==(Matrix t)
 {
    
    if((r==t.r)&&(c==t.c))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
 }
  ostream & operator<<(ostream &os,Matrix &m)
{
    for(int i=0;i<m.r;i++)
    {
        for(int j=0;j<m.c;j++)
     {
         os<<m.a[i][j];
         cout<<"\t";
     }
     cout<<endl;
    }
    return os;
 
}
 void Matrix ::showMatrix( )
 {
    int i,j;
    cout<<"::::::::: Matrix is::::::::::"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         cout<<a[i][j];
         cout<<"\t";
        }
        cout<<endl;
    }
 }
int main()
{
    Matrix m1,m2,m3,m4;
    m1.input();
    m2.input();

     m1.showMatrix();
     m2.showMatrix();

    if(m1==m2)
    {     m3=m1+m2;
          m4=m1-m2;
          cout<<":::::::::::::Add matrix::::::::::::: "<<endl<<m3<<endl;
          cout<<"::::::::::::::::subtraction Matrix:::::::::::::::"<<endl<<m4<<endl;
    }
    else
    {
        cout<<"Not right order";
    }
    return 0;
}