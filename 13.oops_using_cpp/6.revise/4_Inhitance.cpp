#include<iostream>
#include<string.h>
using namespace std;
class Vehicle{
    public:
    string brand ="tata";
    void honk(){
        cout<<"tuut !";
    
    }
};
class Car: public Vehicle {
public:
string brand="abc";

};
int main(){
    Car mycar;
  cout<<  mycar.brand;
}