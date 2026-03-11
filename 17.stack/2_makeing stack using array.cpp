#include<iostream>
#include<vector>
using namespace std; 
class Stack{
    int n=5;
    int arr[5];
  int TOS;
  public:
  Stack (){
    TOS=-1;
  }
  void push(int val){
    if(TOS==n-1){
        cout<<"stack is overflow";
    }else{
        TOS++;
        arr[TOS]=val;
    }
  }
  
  
  void pop(){
    if(TOS==-1){
        cout<<"the stack is overflow ";
    }else{
  TOS--;

    }
  }

  void print(){
  if(TOS==-1){
    cout<<"the stack is empty";
  }else{
    for (int i=TOS;i>=0; i--){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}}
};
int main(){
 Stack s;
 s.push(4);
 s.push(5);
 s.push(23);
 s.pop();
 s.print();
 return 0;

}