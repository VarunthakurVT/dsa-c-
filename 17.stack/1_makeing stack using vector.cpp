#include<iostream>
#include<vector>
using namespace std; 
class Stack{
    vector<int>v; //this is the initialization of the vector
    public:
    void push(int val){  //this function is used to push value in the vector 
        v.push_back(val);
    }
    void pop (){  //this is used to pop value in the vector pop(removing the value)
        v.pop_back();
    }
    int top(){ //like use to point the last index of the vector it is used to like reference to print the stack 
        return v[v.size()-1]; 
    }
    bool empty(){
        return v.size()==0;
    }
 };
 int main(){
    Stack s;
    s.push(5);
    s.push(4);
    s.push(7);
    s.pop();
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
 cout<<endl;

return 0;
 }