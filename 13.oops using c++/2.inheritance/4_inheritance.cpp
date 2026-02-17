#include<iostream>
#include<string>
using namespace std;
class Person{
public :
  string Name; 
  int age;
   
  ~Person(){
      cout<<"descructor of parent  class ";
  }
  Person(string Name,int age){
    this->Name=Name;
    this->age=age;
    cout<<"parent class"<<endl;
  }
  
};
class Student:public Person{
    public:
    int rollNo;
    Student(string Name,int age,int rollNo):Person(Name, age),rollNo(rollNo){
        cout<<"child class"<<endl;
    }
    ~Student(){
        cout<<"descructor of child class"<<endl;
    }
    void getInfo(){
        cout<<"Name :"<<Name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"rollNo :"<<rollNo<<endl;
        }
};
 int main(){
    Student s1("varun", 9, 23);  
    s1.getInfo();
    return 0;
}

    