#include<iostream>
using namespace std;
class Shape{
    public: 
   virtual void draw()=0; //pure virtual function 
};
class Circle : public Shape{
    int radius;
    int pi=3.14;
    int a;
    public:
    void area(int r){
        this->radius=r;
        a=pi*r*r;
        cout<<"area of circle "<<a;
    }
    void draw(){
        cout<<"drawing a circle"<<endl;
    }
};
class Square :public Shape {
    public:
    void draw(){
        cout<<"drawing a square"<<endl;
    }
};
int main(){
    Square s1;
    Circle c1;
    s1.draw();
    c1.draw();
    c1.area(3);
}