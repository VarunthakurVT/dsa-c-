#include<iostream>
using namespace std; 
class Stack{
    int size{};
    int*arr;
    int TOS;

public:
 Stack(int size){
    this->size=size;
    arr=new int [size];
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
        cout<<"stack is underflow";
    }else{
        TOS--;

    }

}
void print(){
    if(TOS==-1){
        cout<<"stack is empty";
    }else{
        for(int i=TOS;i>=0;i--){
            cout<<arr[i]<<" ";
          
        }
    }
}
bool isempty(){
    if(TOS==-1){
        return true;
    }else{
        return false;
    }
}
};
int main(){
    Stack s(2);
    s.push(345);
    s.push(56);
    s.print();
    return 0;
}
