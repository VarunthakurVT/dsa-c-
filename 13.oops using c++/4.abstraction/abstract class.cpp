#include<iostream>
using namespace std;
class Shape { //abstract class
    public:
   virtual void shape()=0; //pure virtual function
};
class Circle :public Shape{
    public:
    void shape(){
        cout<<"drawCircle"<<endl;
    }
};
int main(){
  Circle c1;
  c1.shape();
  return 0;

}