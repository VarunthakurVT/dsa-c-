#include<iostream>
#include<vector>
class Stack{
   std:: vector<int>v;
   public:
   void push(int val){
    v.push_back(val);
   }
   void pop(){
    v.pop_back();
   }
   int top(){
    return v[v.size()-1];
   }
   bool empty(){
    return v.size()==0;
   }
};
int main(){
    Stack s;
    s.push(32);
    s.push(3445);
    s.push(35);
    s.pop();
    while(!s.empty()){
        std::cout<<s.top()<<" ";
       s.pop();
    }
   std:: cout<<std::endl;

}