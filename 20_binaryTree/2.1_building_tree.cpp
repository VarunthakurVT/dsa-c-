#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
   Node(int d){
    this->data=d;
    this->right=NULL;
    this->left=NULL;

   }
};
Node*buildTree(Node*root){
 cout<<"Enter data:"<<endl;
 int data;
 cin>>data;
 if(data==-1){
    return NULL;
   }
   root=new Node(data);
 cout<<"enter data for inserting in left "<<data;
 root->left=buildTree(root->left);

 cout<<"enter data for inserting data in right"<<data;
 root->right=buildTree(root->right);
 return root;
}
void levelOrderTraversal(Node*root){
   queue<Node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
   Node*temp=q.front();
   q.pop();
   if(temp==NULL){
      cout<<endl;
      if(!q.empty()){
         q.push(NULL);
      }
   }else{
      cout<<temp ->data<<" ";
     if(temp->left){
      q.push(temp->left);
   }
   if(temp->right){
      q.push(temp->right);
   }
   
  }
}
}
void countLeafnode(Node*root,int &count){
   if(root==NULL){
      return;
   }
    countLeafnode(root->left,count);
    if(root->left==NULL&&root->right==NULL){
      count++;

    }
    countLeafnode(root->right,count);

}
int noOfleafnode(Node*root){
   int count=0;
   countLeafnode(root,count);
   return count;
}

void inOrder(Node*root){
   //base case 
   if(root==NULL){
      return ;
   }
   inOrder(root->left);
   cout<<root->data<< " ";
   inOrder(root->right);
}
void preOrder(Node*root){
   if(root==NULL){
      return;
   }
   cout<<root->data<<" ";
   
   preOrder(root->left);
   preOrder(root->right);

}
void postOrder(Node*root){
   if(root==NULL){
      return;
   }
   postOrder(root->left);
   postOrder(root->right);
   cout<<root->data<<" ";
}
int main(){
Node*root=NULL;
//create a tree
root=buildTree(root);
// data 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//level order
cout<<"Printing level order traversal"<<endl;
levelOrderTraversal(root);
cout<<"Inorder traversal is :"<<endl;
inOrder(root);
cout<<"Preorder"<<endl;
preOrder(root);
cout<<"postOrder"<<endl;
postOrder(root);

int leafCount = 0;
    countLeafnode(root, leafCount);
    cout << "Number of leaf nodes: " << leafCount << endl;
   cout<<"the number of leaf notes are :::"<< noOfleafnode(root);
}


