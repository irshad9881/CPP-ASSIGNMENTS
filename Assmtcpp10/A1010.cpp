#include<iostream>
using namespace std;
class Player 
{ 
       private:
       int pno;
       string name;
       int nom;
       int *goal;
       public:
      Player(int p,string s,int n,int g)
    {
        pno=p;
        name=s;
        nom=n;
        *goal=g;
    }
    Player()
    {
        cout<<"Enter Player No :"<<endl;
        cin>>pno;
        cout<<"Enter Name       :"<<endl;
        //cin.ignore();/
        //cin.getline(name,200);
        cin>>name;
        cout<<"Enter No of match :"<<endl;
        cin>>nom;
        goal=new int[nom];
        for(int i=0;i<nom;i++)
        {
            cout<<"No of goal in a match:"<<i+1<<endl;
            cin>>goal[i];
        }
    }
    void show()
    {
        cout<<"\n..................................."<<endl;
        cout<<"Player No. :"<<pno<<endl;
        cout<<"Player name:"<<name<<endl;
        cout<<"Player nom :"<<nom<<endl;
        for(int i=0;i<nom;i++)
        {
            cout<<"matchs :"<<i+1<<" goals :"<<goal[i]<<endl;
        }
    }
};
int main()
{
    Player p;
    p.show();
    return 0;
}