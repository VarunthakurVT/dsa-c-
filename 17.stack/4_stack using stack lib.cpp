#include<iostream>
#include<stack> //this is the predefined librery for the stack 
using namespace std;
int main(){
    stack<int>s; //in this we make a stack 
    s.push(4);//these are the push operation in this 
    s.push(6);
    s.push(5);
    s.push(3);
    s.pop(); //this is the pop function 
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}