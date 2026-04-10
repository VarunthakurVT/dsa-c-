#include<iostream>
#include<string>
using namespace std; 
class Person{
    string name;
    int age;
    string country;
    public:
    void add_info(){
        cout<<"enter your name: ";
        cin>>name;
        cout<<"enter your age: ";
        cin>>age;
        cout<<"enter your country: ";
        cin>>country;
    }
    void show_info(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"country"<<country<<endl;
    }
};
int main(){
Person p1;
p1.add_info();
p1.show_info();
return 0;
}