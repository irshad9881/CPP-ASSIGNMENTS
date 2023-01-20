/*#include<iostream>//emp 1;**********
using namespace std;
class Rupee
{
private:
    int x;
    public:
    Rupee()
    {
     cout<<"Default constructor:"<<endl;
    }
    void display()
    {
        cout<<"Rupee="<<x<<endl;
    }
    
};
int main()
{
    Rupee r;
    r.display();
    return 0;
}
 */
/*#include<iostream>//emp 2;******
using namespace std;
class Rupee
{
private:
    int x;
    public:
    Rupee()
    {
     cout<<"Default constructor:"<<endl;
    }
    void display()
    {
        cout<<"Rupee="<<x<<endl;
    }
    
};
int main()
{
    Rupee r=5; //error 
    r.display();
    return 0;
}*/

#include<iostream>//emp 3;
using namespace std;
class Rupee
{
private:
    int x;
    public:
    Rupee()
    {
     cout<<"Default constructor:"<<endl;
    }
     Rupee(int n)
    {
     cout<<"Parameterize  constructor:"<<endl;
     x=n;
    }
    void display()
    {
     cout<<"Rupee="<<x<<endl;
    }
};
int main()
{
    Rupee r=5;
    r.display();
    return 0;
}

 
/*#include<iostream>//emp 4;
using namespace std;
class Rupee
{
    private:
    int x;
    public:
    Rupee()
    {
     cout<<"Default constructor:"<<endl;
    }
     Rupee(int n)
    {
     cout<<"Parameterize  constructor:"<<endl;
     x=n;
    }
    void display()
    {
     cout<<"Rupee="<<x<<endl;
    }
    
};
int main()
{
    int y=5;
    Rupee r=x;
    r.display();
    y=r;//error because we can assign rupee tpe value  in int type value:
    return 0;
}*/