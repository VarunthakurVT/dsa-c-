#include<iostream>
using namespace std;
class Queue{
    int size;
    int *arr;
    int front;
    int rear; 
    public:
    Queue(){
    size=100;
    arr=new int [size];
    front =-1;
    rear=-1;
    }
    bool IsFull(){
        return (rear==size-1);
    }
    bool IsEmpty(){
        return (front==-1||front>rear);
    }
    void enqueue(int val){
        if(IsFull()){
            cout<<"The queue is full ";
            return;
        }
        if (front == -1) {
                front = 0;}
        
            rear++;
            arr[rear]=val;
         
        }
    void dequeue(){
        if(IsEmpty()){
            cout<<"stack is empty ";
            return;
        }else{
            front++;
        }
    }
    int getFront(){
        if(IsEmpty()){
            cout<<"queue is empty";
            return -1 ;
        }
        else{
        return arr[front];
    }
    }
    int getRear(){
        if(IsEmpty()){
            cout<<"the stack is empty";
            return -1;
        }else{
            return arr[rear];
        }
    }

};
int main (){
    Queue q;
    q.enqueue(34);
    q.enqueue(45);
    cout<<q.getFront();
    return 0;
}
