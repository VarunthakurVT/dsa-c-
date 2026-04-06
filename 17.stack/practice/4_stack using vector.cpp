#include<iostream>
#include<vector>
using namespace std; 
class Stack{
    vector<int>vec;
    public:
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        vec.pop_back();

    }
    int top(){
        return vec[vec.size()-1];
    }
    bool empty(){
        return vec.size()==0;
    }
};
    int main(){
        Stack s;
        s.push(324);
        s.push(332);
        s.push(34);
        s.pop();
        while(!s.empty()){
            cout<<s.top();
            s.pop();
            cout<<endl;
        }
        return 0;
    }

