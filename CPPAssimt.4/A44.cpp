#include<iostream>//doute
using namespace std;
class Date
{
    private:
    int d,m,y;
    public:
   Date()
    {
    d=9;//enhan aage 0 nahi lagasakte because bhe octal  samghleta
    m=11;
    y=2022; 
    }
    /*Date(int x,int y,int z)
    {
    d=x;
    m=y;
    y=z; 
    }*/
    void display()
    {
     cout<<"DD/MM/YYYY - "<<d<<"/"<<m<<"/"<<y<<endl;
    }
};
int main()
{    
     Date a;
     a.display();
     return 0;
}

