/*#include<iostream>
using namespace std;
class Animal
{
    public:

   void sound()
   {
    cout<<"Animal sound :"<<endl;
   }
  
};
class Dog :public Animal
{

    public:
    void sound()
    {
        cout<<"Dog sound :"<<endl;
    }
};
int main()
{
    Dog d;
    d.sound();
    return 0;
}*/
#include<iostream>
using namespace std;
class Animal
{
    public:
    string sound;
    void setsound(string sound)
    {
    this->sound=sound;
    }
      void getsound1()
    {
    cout<<"cat== "<<sound<<endl;
    }
};
class Dog :public Animal
{
    private:
    string sound2;
    public:
    void setsound(string sound1)
    {
     sound2=sound1;
    }
     void getsound1()
    {
    cout<<"Dog== "<<sound2<<endl;
    }
    
};
int main()
{
    Animal cat;
    cat.setsound("meyon meyon");
    cat.getsound1();
   // cout<<"Cat Sound="<<cat.getsound()<<endl;
    Dog d;
    d.setsound("bow bow");
    d.getsound1();
    //cout<<"Dog Sound="<<d.getsound1()<<endl;
    return 0;
}