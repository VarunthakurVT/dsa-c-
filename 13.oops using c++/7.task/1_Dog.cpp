#include<iostream>
using namespace std; 
class Dog{
    public:
    void bark(){
        cout<<"Woof!";
    }
};
int main(){
    Dog d1;
    d1.bark();
}