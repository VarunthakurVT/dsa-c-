#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node (int value){
     data=value;
     next=NULL;
    }
};
class List{
Node*head;
Node*tail;
public:
List(){
head=tail=NULL;
}
//now we are try to add new element in this 
void push_front(int val){
    Node*newNode=new Node(val); //in this if we do not make a space between the new and Node it will think it like an function if we
    //space it thinks it is an object
    if(head==NULL){
        head=tail=newNode;
        return;
    }else{
        newNode->next=head;
        head=newNode;
    }
}
void push_back(int val){
    Node*newNode=new Node(val);
    if(head==NULL){
        head=tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}
void printll(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null"<<endl;
}
void pop_front(){
    if(head==NULL){
        cout<<"the head is empty";
        return;
    }else{
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
}
void pop_back(){
    if(head==NULL){
        cout<<"the list is empty";
        return;
    }else{
        Node*temp=head;
  while(temp->next!=NULL){
    temp->next=NULL;
    delete tail;
    tail=temp;
  }
    }
}

};
int main(){
    List ll;
    ll.push_front(2);
    ll.push_back(4);
    ll.pop_front();
    ll.push_back(7);
    ll.pop_back();
    ll.printll();

}
