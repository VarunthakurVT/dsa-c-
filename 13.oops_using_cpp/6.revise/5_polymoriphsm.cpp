#include<iostream>
using namespace std; 
class Animal{
    public:

    void animalsound(){
        cout<<"this is the animal sound";
    }
};
class Dog:public Animal{
    public:
  void animalsound(){
    cout<<"dog";
  }
};
class Cat:public Animal{
    public:
    void animalsound(){
        cout<<"cat";
    }
};
int main(){
    Animal myanimal;
    Dog mydog;
    Cat mycat;
    myanimal.animalsound();

}
