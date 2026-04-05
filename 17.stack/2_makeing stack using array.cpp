#include<iostream>

using namespace std; 
class Stack{
   int *arr;
   int size;
  int TOS;
  public:
  Stack (int size){
    this->size=size;
    arr=new int[size];
    TOS=-1;
  }
  void push(int val){
    if(TOS==size-1){
        cout<<"stack is overflow";
    }else{
        TOS++;
        arr[TOS]=val;
    }
  }
  
  
  void pop(){
    if(TOS==-1){
        cout<<"the stack is underflow "; //meaning the stack is empty
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
bool isEmpty(){
  if(TOS==-1){
    return true;
  }else{
    return false;
  }
}
};
int main(){
 Stack s(5);
 s.push(4);
 s.push(5);
 s.push(23);
 s.pop();
 s.print();
 if(s.isEmpty()){
  cout<<"stack is empty";
 }else{
  cout<<"stack is not empty";
 }

 return 0;

}