#include<iostream>
#include<string>
using namespace std;
int main(){
    int age;
    string   a;
    cout<<"enter your name ";
   getline(cin,a);
    cout<<a<<endl;
    cout<<"enter your age";
    cin>>age;
    cout<<"your age is :"<<age<<endl;
    //cin not get tab blank space like this to get the blank space and the new line we use cin.get 
    return 0;
}