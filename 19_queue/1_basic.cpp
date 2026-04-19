// queue is the first in first out the data structure 
//in the queue there is 3 operation 
// push(rear) ,pop(front),front(head data)
//this is using the manual linked list
#include<iostream>
#include<vector>
using namespace std ;
class Node{
    public:
int data;
Node *next;
Node (int val){
data=val;
next=NULL;
}
};
class Queue{
    public:
    Node *head{nullptr};
    Node *tail{nullptr};
    void push(int data){
   Node* newNode=new Node(data);
   if(empty()){
head =tail=newNode;
   }else{
    tail->next=newNode;
    tail=newNode;

   }
    }
    void pop(){ //O(1)
        if(empty()){
            cout<<"linked list is empty";
            return ;
        }else{
            Node *temp=head;
            head=head->next;
            delete temp;
        }

    }
   int  front(){
if (empty()){
    return -1;
}else{
    return head->data;

   }
}
   bool empty(){
    return head==NULL;
   }
};
int main(){
    Queue q1;
    q1.push(45);
    q1.push(34);
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout <<endl ;

    return 0 ;
}







