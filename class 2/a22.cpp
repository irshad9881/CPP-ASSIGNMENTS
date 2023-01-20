#include<iostream>//type casting type 1 int(ud) to rupee (pd)
using namespace std;
class Rupee
{
    private:
    int r;
    public:
    Rupee()
    {
        cout<<"DC of rupee :"<<endl;
    }
    Rupee(int n)
    {
        cout<<"pc of rupee:"<<endl;
        r=n;
    }
    void display()
    {
     cout<<"display of rupee: "<<r<<endl;
    }
};
 class Dollar
 {
    
 } 
int main()
{
    int x=10;
    Rupee r=x;
    r.display();
    return 0;
}