#include<iostream>
using namespace std;
class Parent{
 public:
 void getInfo(){
    cout<<"this is parent class"<<endl;
 }
};
class child:public Parent{
    public:
    void getInfo(){
        cout<<"this is the child class";
    }
};
int main(){
    Parent p1;
    p1.getInfo();
    child c1;
    c1.getInfo();
    return 0;
}