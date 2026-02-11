#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=18){
        cout<<"you are eligible for voting\n";
    }else{
        cout<<"you are not eligible for voting\n";
    }
    return 0;
}