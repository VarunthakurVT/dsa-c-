#include<iostream>
#include<string>
using namespace std; 
class Teacher{
    string name; 
    string dept;
    string subject; 
    double salary;

    public:
    //non parameterzed
    // Teacher(){
    //     dept="computer science";
    // }
    //parameterzed
    Teacher(string name, string d, string s, double sal){
        this->name=name;
        dept=d;
        subject=s;
        salary=sal;
    }
    //copy constructor
    Teacher(Teacher &orgObj){
        cout<<"I am copy constructor";
        this->name=orgObj.name;
        this->dept=orgObj.dept;
        this->subject=orgObj.subject;
    }
        void getInfo(){
       cout<<"name: "<<name<<endl;
       cout<<"dept: "<<dept<<endl;
       cout<<"subject: "<<subject<<endl;
        }
    };
int main(){
    Teacher t1("varun","Computer Science","C++",2132.232);
    // t1.getInfo();
    Teacher t2(t1); //default copy constructor is invoke
    t2.getInfo();
    return 0;
}
