#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
string name;
int age;
};
class Student: public Person{
     public:
    int rollNo;
};
class gradstudent:public Student{
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