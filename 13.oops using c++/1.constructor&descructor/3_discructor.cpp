#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
string name;
double *cgpaPtr;
Student(string name,double cgpa){
    this ->name=name;
    cgpaPtr=new double;
    *cgpaPtr=cgpa;
}
//destructor is just opposite of the constructor. Destructor deallocate the class form the memory
~Student(){
    cout<<"Hi i delete everything";
    delete cgpaPtr; //it is used to deallocate the ptr
    //it is also used for save memory 
}
void getinfo(){
    cout<<"name :"<<name<<endl;
    cout<<"cgpa :"<<*cgpaPtr<<endl;
}
};
int main(){
    Student s1 ("varun_thakur",9.0);
    s1.getinfo();
}