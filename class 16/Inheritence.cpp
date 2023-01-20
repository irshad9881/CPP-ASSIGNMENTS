//1////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;
class A
{
  public:
  void Af1()
  {
    cout<<"public of A:"<<endl;
  }
  private:
  void Af2()
{
    cout<<"private of A:"<<endl;
}
protected:
void Af3()
{
    cout<<"Protected of A:"<<endl;
}
};
int main()
{
    A a;
    a.Af1();
    //a.Af2();
    //a.Af3();
    return 0;
}*/


//////2///////////////////////////////// SO this work we can also do with the help of inheritence
/*#include<iostream>
using namespace std;
class A
{
  public:
  void Af1()
  {
    cout<<"public of A:"<<endl;
  }
  private:
  void Af2()
{
    cout<<"private of A:"<<endl;
}
protected:
void Af3()
{
    cout<<"Protected of A:"<<endl;
}
};
class A2
{
  public:
   
  
  void Af4()
  {
    cout<<"public of A2:"<<endl;
    a.Af1();
   // a.Af2();
   //a.Af3();
  }
  private:
  A a;//we can write it in any visibility mode
  void Af5()
{ 
    cout<<"private of A2:"<<endl;
}
protected:

void Af6()
{
    cout<<"Protected of A2:"<<endl;
   
}
};
int main()
{
    A2 b;
    b.Af4();
    //a.Af2();
    //a.Af3();
    return 0;
}*/

//3/////////////////////////////////////////////
/*#include<iostream>
using namespace std;
class A
{
  public:
  void Af1()
  {
    cout<<"public of A:"<<endl;
  }
  private:
  void Af2()
{
    cout<<"private of A:"<<endl;
}
protected:
void Af3()
{
    cout<<"Protected of A:"<<endl;
}
};
class A2:public A
{
  public:
  void Af4()
  {
    cout<<"public of A2:"<<endl;
    Af1();
     // Af2();
      Af3();//protected of A only can inherit int child class..
  }
  private:
  void Af5()
{
    cout<<"private of A2:"<<endl;
}
protected:
void Af6()
{
    cout<<"Protected of A2:"<<endl; 
}
};
int main()
{
    A2 b;
    b.Af4();
    //a.Af2();
    //a.Af3();
    return 0;
}
*/

/////////////4/////////////////////////////////////
/*#include<iostream>
using namespace std;
class A
{
  public:
 void Af1()
  {
    cout<<"public of A:"<<endl;
  }
  A(int x)///pc 
{
    cout<<"Constructor of A:"<<endl;
}
  private:
  
  void Af2()
{
    cout<<"private of A:"<<endl;
}
protected:

void Af3()
{
    cout<<"Protected of A:"<<endl;
}
};
class A2:public A
{
  public:
 A2():A(4)//call of paraent constructor because con. is not inherited it can be in public 
  {
     cout<<"constructor of A2:"<<endl;
  }

  void Af4()
  {
      cout<<"public of A2:"<<endl;
      Af1();
      // Af2();
      Af3();//protected of A only can inherit int child class..
  }
  private:
  void Af5()
{
    cout<<"private of A2:"<<endl;
}
protected:
void Af6()
{
    cout<<"Protected of A2:"<<endl; 
}
 
};
int main()
{
    A2 b;
    b.Af4();
    //a.Af2();
    //a.Af3();
    return 0;
}
*/
///////////////////////////////////////////
/*#include<iostream>
using namespace std;
class A
{
  public:

  void Af1()
  {
    cout<<"public of A:"<<endl;
  }
  A(int x)///pc 
{
    cout<<"Constructor of A:"<<endl;
}
  private:
  void Af2()
{
    cout<<"private of A:"<<endl;
}
protected:

void Af3()
{
    cout<<"Protected of A:"<<endl;
}
};
class A2:public A
{
  public:
  A2():A(4)//call of paraent constructor because con. is not inherited
  {
     cout<<"constructor of A2:"<<endl;
  }
  void Af4()
  {
      cout<<"public of A2:"<<endl;
      Af1();
      // Af2();
      Af3();//protected of A only can inherit int child class..
  }
  private:
  //A a;
  void Af5()
{
    cout<<"private of A2:"<<endl;
}
protected:
void Af6()
{
    cout<<"Protected of A2:"<<endl; 
}
};
int main()
{
    A2 b;
    b.Af4();
    //a.Af2();
    //a.Af3();
    return 0;
}
*/
/////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
class A
{
  public:
  ~A()
  {
    cout<<"Des of A:"<<endl;
  }
  void Af1()
  {
    cout<<"public of A:"<<endl;
  }
  A(int x)///pc 
{
    cout<<"Constructor of A:"<<endl;
}
  private:
  void Af2()
{
    cout<<"private of A:"<<endl;
}
protected:

void Af3()
{
    cout<<"Protected of A:"<<endl;
}
};
class A2:public A
{
  public:
  ~A2()
  {
    cout<<"Dis of A2"<<endl;
  }
  A2():A(4)//call of paraent constructor because con. is not inherited
  {
     cout<<"constructor of A2:"<<endl;
  }
  void Af4()
  {
      cout<<"public of A2:"<<endl;
      Af1();
      // Af2();
      Af3();//protected of A only can inherit int child class..
  }
  private:
  //A a;
  void Af5()
{
    cout<<"private of A2:"<<endl;
}
protected:
void Af6()
{
    cout<<"Protected of A2:"<<endl; 
}
};
int main()
{
    A2 b;
    b.Af4();
    //a.Af2();
    //a.Af3();
    return 0;
}

