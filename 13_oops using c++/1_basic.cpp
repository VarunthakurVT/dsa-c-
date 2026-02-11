//first let's do the #include files
#include<iostream> //this is a standard lib. to access the input and output 
#include<string> //it is used to access the string data type 
using namespace std; 
class Teacher{
    private:  //there is three type of acess modifiers like(private,publid,protected)
    double salary; //these are the property of class
    public:
    string name;
    string dept;
    string subject;
    void changeDept(string newDept){//these are the methods of the class 
  dept=newDept;//in this i make the function to change the name of the dept
    }
    //this is the setter in the pivate acess modifiers
  void setSalary (double s){
  salary=s;
  }
  //this is the getter acess modifiers.. this is just like the function 
  double getsalary(){
    return salary;
  }
};
int main(){
    Teacher t1; //teacher is the object and t1 is the object 
    t1.name="varun thakur"; //t1.name t1 is the object   and .is used to acess this like class and object 
    t1.dept="cs";
    t1.setSalary(20000); //in this we do a function call
    cout<<t1.name<<endl;
    cout<<t1.getsalary()<<endl;
    return 0;
}