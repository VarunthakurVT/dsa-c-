#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
string name;
int age;
void getInfo(){
      cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
}
};
class Student: public Person{
     public:
    int rollNo;

    void getInfo(){
        Person::getInfo();
                 cout<<"Roll No :"<<rollNo<<endl;
    }
};
class gradstudent:public Student{
     public:
    int reserchno;
    void getInfo(){
        Student::getInfo();
        cout<<"reserch No :"<<reserchno<<endl;
    }
};
int main(){
    gradstudent s1;
    s1.name="abc";
    s1.age=32;
    s1.rollNo=34;
    s1.reserchno=34;
    s1.getInfo();
    Student q1;
    q1.name="varun";
    q1.age=39;
    q1.getInfo();
    return 0;
}