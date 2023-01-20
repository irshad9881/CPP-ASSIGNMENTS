#include<iostream>
using namespace std;
class rupee 
{
    private:
    int r;
    public:
    rupee()
    {

    }
    rupee(int x)
    {
        r=x;
    }
    void display()
    {
        cout<<"rupee ="<<r<<endl;
    }
    operator int()
    {
        cout<<"Operator call "<<endl;
        return r;
    }

};
int main()
{ 
     int x=5;
     rupee r1=x;
     r1.display();
     x=r1;  
     return 0;
}