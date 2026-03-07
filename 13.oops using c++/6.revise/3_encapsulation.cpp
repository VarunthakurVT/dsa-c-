// Encapsulation is just like we can make inside the public to get set data of private using get or set keyword
#include<iostream>
using namespace std; 
class Car{
    private:
    int Salary;
    public:
    void setSalary(int s){
        Salary=s;
    }
    int  getSalary(){
   return Salary;
    }
    };

int main(){
    Car c1;
    c1.setSalary(3242332);
    cout<<c1.getSalary();
}