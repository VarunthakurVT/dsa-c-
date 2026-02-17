#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
string subject;
double salary;
};
class Student{
     public:
     string name;
    int rollNo;
    int age;
};
class gradstudent: public Teacher, public Student{
     public:
    int reserchno;
    void getInfo(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Roll No :"<<rollNo<<endl;
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
    return 0;
}