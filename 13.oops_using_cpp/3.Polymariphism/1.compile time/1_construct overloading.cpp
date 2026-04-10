#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    Student(){
        cout<<"non permertized"<<endl;
    }
    Student(string name){
        this->name;
        cout<<"permertized"<<endl;
    }
};
int main(){
    
    // Student s1; if we do this then it call to non peraertized 

    Student s1("varun");
    Student s2;
    // s2.name="varun";
   
    return 0;

}
