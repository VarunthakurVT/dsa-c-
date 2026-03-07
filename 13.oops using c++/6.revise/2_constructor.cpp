#include<iostream>
#include<string.h>
using namespace std; 
class Car{ //define the class 
    private: //define the access modifiers
   int chassis_number;
   public:
   string model;
   string brand;
   int man_date; //define the attributes
  //there are 3 types of constructor like 
  //1 parametrized ,2.non-para.3.copy
  //1
  Car(string x,string y,int  z){
    model=x;
    brand=y;
    man_date=z;

  }
  //2
  Car(){
    cout<<"hello"<<endl;
  }  //we can define these outside the class
};
int main(){

 Car c1; //c1 is the object in this class 
Car c2("A4","tata",23/34/2312);
 cout<<c2.brand;
}