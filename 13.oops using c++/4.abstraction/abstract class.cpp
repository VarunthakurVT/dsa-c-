//abstract class have pure virtual function 
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
class square :public Shape{
    public:
    void shape(){
        cout<<"drawSquare"<<endl;
    }
};
int main(){
    //this is call by value 
  Circle c1;
  square s1;

  c1.shape();
  s1.shape(); 
  //this is call by function 
  Shape* shape1 = new Circle(); 
    Shape* shape2 = new square();

    // The Magic Happens Here:
    shape1->shape(); // Outputs: drawCircle
    shape2->shape(); // Outputs: drawSquare
  return 0;

}