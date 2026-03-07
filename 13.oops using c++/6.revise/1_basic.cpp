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
   //we can define the method in two ways inside the class or outside of the class
   void hello(); //function or method declaration
   void hi(){
    cout<<"hi"<<endl;
   }
   };
  void Car::hello(){ 
    cout<<"hello"<<endl;
   }
int main(){

 Car c1; //c1 is the object in this class 
 c1.hello();
 c1.hi();
 c1.brand="tata";
 c1.man_date=12/2/3034;
 c1.model="as2";
 cout<<c1.brand;
}