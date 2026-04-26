#include<iostream>
class Stack{
    int size;
    int*arr;
    int TOS;
    public:
    Stack(int size){
        this->size=size;
        arr=new int[size];
        TOS=-1;
    }
    ~Stack() {
        delete[] arr;
    }
    void push(int val){
        if(TOS==size-1){
            std::cout<<"stack is overflow";
        }else{
            TOS++;
            arr[TOS]=val;
        }
    }
    void pop(){
        if(TOS==-1){
            std::cout<<"the stack is empty";

        }else{
            TOS--;
        }
    }
    void print(){
        if(TOS==-1){
            std::cout<<"stack is empty";
        }else{
            for(int i=TOS;i>=0;i--){
                std::cout<<arr[i]<<" ";

            }
        }
    }
};
int main(){
    Stack s(4);
    s.push(34);
    s.push(67);
    s.push(89);
    s.pop();
    s.print();
    return 0;


}