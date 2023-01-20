/*#include<iostream>
using namespace std;
#include<cstring>
class Mystring
{
    private:
    char *a;
    int size;
    public:
    Mystring()
{
    cout<<"drfault constructor:"<<endl;
}
Mystring(char  *str)
{
    cout<<"string constroctor"<<endl;
    size=strlen(str);
    a=(char*)malloc(size+1);
    strcpy(a,str);
}
void display()
{
    cout<<a<<endl;
}
void change(char  *str)
{
    free(a);
    size=strlen(str);
    a=(char*)malloc(size+1);
    strcpy(a,str);
}
};
int main()
{
    Mystring s1("IRSHAD");//shalo copy  COMPILER NE APNA CPY CONSTRUCTOR BNAYA
    Mystring s2=s1;
    s1.change("Azeem");//shalo copy
     s1.display();
      s2.display();
    return 0;
}
*/




#include<iostream>
using namespace std;
#include<cstring>
class Mystring
{
    private:
    char *a;
    int size;
    public:
    Mystring()
{
    cout<<"drfault constructor:"<<endl;
}
Mystring(char  *str)
{
    cout<<"string constroctor"<<endl;
    size=strlen(str);
    a=(char*)malloc(size+1);
    strcpy(a,str);
}
Mystring(const Mystring  &s)//deep copy, HAMNE APNA CPOY CONSTRUCTOR BNAYA
{
    cout<<"copty constroctor"<<endl;
    size=strlen(s.a);
    a=(char*)malloc(size+1);
    strcpy(a,s.a);
}
Mystring &operator=(const Mystring  &s)
    {
    cout<<"Assigenment  constroctor"<<endl;
    if(a==s.a)
    {
        return *this;
    }
    free(a);
    size=strlen(s.a);
    a=(char*)malloc(size+1);
    strcpy(a,s.a);
    return  *this;
    }
void display()
    {
    cout<<a<<endl;
    }
void change(char  *str)
{
    free(a);
    size=strlen(str);
    a=(char*)malloc(size+1);
    strcpy(a,str);
}
};
int main()
{
    Mystring s1("IRSHAD");
    Mystring s2=s1;
    Mystring s3;
    Mystring s4("Mysirg");
    Mystring s5;
    s3=s1;
    s4=s1;
    s1=s1;
    s5=s4=s1;
    s1.change("Azeem");
    s1.display();
    s2.display();
    s3.display(); 
    s4.display();
    s5.display();
    return 0;
}