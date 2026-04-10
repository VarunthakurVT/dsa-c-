#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
string subject;
double salary;
void getInfo(){
    cout<<"subject:"<<subject<<endl;
    cout<<"salary"<<salary<<endl;
}
};
class Student{
     public:
     string name;
    int rollNo;
    int age;
    void getINfo(){
      
 cout<<"Name :"<<name<<endl;
 cout<<"Roll No :"<<rollNo<<endl;
        cout<<"Age :"<<age<<endl;
    }

};
class gradstudent: public Teacher, public Student{
     public:
    int reserchno;
    void getInfo(){
       Student::getINfo();
       Teacher::getInfo();
        cout<<"reserch No :"<<reserchno<<endl;
    }
};
int main(){
    gradstudent s1;
    s1.name="abc";
    s1.age=32;
    s1.rollNo=34;
    s1.salary=43;
    s1.reserchno=34;
    s1.getInfo();
    return 0;
}