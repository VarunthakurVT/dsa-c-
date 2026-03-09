#include<iostream>
using namespace std; 
class Node{
    public:
    int data;
    Node*next;
Node(int val){
    data=val;
    next=NULL;
}
};
class list{
    public:
    Node*head;
    Node*tail;
    list(){
 head=tail=NULL;
    }
    void push_front(int val){
        Node*newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
 }
 void push_back(int val){
    Node*newNode=new Node(val);
 if(head==NULL){
    head=tail=NULL;
 }else{
    tail->next=newNode;
    tail=newNode;
 }
 }
};