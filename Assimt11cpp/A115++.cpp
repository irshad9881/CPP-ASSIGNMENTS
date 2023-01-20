#include<iostream>
#include<math.h>
using namespace std;
class Photon
{
 protected:
 double wave;
 public: 
 /*Photon(double w)//or
 {
  wave=w/pow(10,-10);
 }*/
  void Photon1(double w)
 {
  wave=w/pow(10,-10);//Angistrom me ans 1A*=pow(10,-10)m
 }
};
class Energy:public Photon
{
 private:
 double e;
 public:

 /*Energy(double w):Photon(w)
 {
    
 }*/
 void cal()
 {
    e=(6.6*(pow(10,-34))*3*(pow(10,8)))/wave;
    cout<<"Energy of a photon: "<<e<<" A*"<<endl;
 }
};
int main()
{
    //Energy e1(0.5);//or
    Energy e1;
    e1.Photon1(0.5);
    e1.cal();
    return 0;
}