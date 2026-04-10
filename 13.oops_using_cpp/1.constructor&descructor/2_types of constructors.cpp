#include<iostream>
#include<string>
using namespace std; 
class Teacher{
    string name; 
    string dept;
    string subject; 
    double salary;
   double *cgpaPtr;
    public:
    //non parameterzed
    // Teacher(){
    //     dept="computer science";
    // }
    //parameterzed
    Teacher(string name, string d, string s, double sal, double cgpa){
        this->name=name;
       this-> dept=d;
        this->subject=s;
       this-> salary=sal;
       this-> cgpaPtr=new double;
        *cgpaPtr=cgpa;
    }
    //copy constructor  this is the example of shallow copy 
    // Teacher(Teacher &orgObj){
    //     cout<<"I am copy constructor";
    //     this->name=orgObj.name;
    //     this->dept=orgObj.dept;
    //     this->subject=orgObj.subject;
    // }
    //this is the example of deep copy 
    Teacher(Teacher &obj){
        cout<<"I am copy constructor";
        this->name=obj.name;
        cgpaPtr=new double;
       *cgpaPtr=*obj.cgpaPtr;
    }
        void getInfo(){
       cout<<"name: "<<name<<endl;
       cout<<"cgpa: "<<*cgpaPtr<<endl;
       cout<<"subject: "<<subject<<endl;
        } 
        //constructor oveloading is nothing but creating multiple constructor with different parameters
        Teacher(string n){
            this->name=n;
            cout<<"this is the oveloading constructor"<<endl;
        }
    };
int main(){
    Teacher t1("varun","Computer Science","C++",2132.232,9.0);
    // t1.getInfo();
    Teacher t2(t1); //default copy constructor is invoke
    t2.getInfo();
    Teacher t3("varun");
    t3.getInfo();
    Teacher t4("varun thakur");
    
    return 0;
}
