//type castying exmp 1;***********
/*#include<iostream>
using namespace std;
class Complex 
{
    private:
    int real;
    int img;
    public:
    
};
int main()
{
    Complex c=5;
    return 0;
}//error dega



//type casting exmp 2;*********
#include<iostream>
using namespace std;
class Complex 
{
    private:
    int real;
    int img;
    public:
    Complex(int x)
    {
        real=x;
        img=x;
    }
    void display()
    {
        cout<<"Real= "<<real<<endl<<"Img= "<<img<<endl;
    }
};
int main()
{
    Complex c=5;
    c.display();
    return 0;
}
*/
//typ casting exmp 3;**********
/*#include<iostream>
using namespace std;
class Complex 
{
    private:
    int real;
    int img;
    public:
    Complex(int x)
    {
    real =x;
    img =x;
    }
     Complex( )  //default constrotter ;
    {
        
    }
    void display()
    {
        cout<<"Real= "<<real<<endl<<"Img= "<<img<<endl;
    }
};
int main()
{
    Complex c;
    c=5;
    c.display();
    return 0;

}*/

//exp 4;
#include<iostream>
using namespace std;
class Complex 
{
    private:
    int real;
    int img;
    public:
   /*Complex(int x) //ise htaden to rerror dega
    {
        real=x;
        img=x;
    }*/
    void display()
    {
        cout<<"Real= "<<real<<endl<<"Img= "<<img<<endl;
    }
};
int main()
{
    Complex c=5;   //error
    c.display();
    return 0;
}

