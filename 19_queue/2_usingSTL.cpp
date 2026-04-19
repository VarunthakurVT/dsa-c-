#include<iostream>
#include<queue>
using namespace std; 
int main (){
    queue<int>q;
    q.push(45);
    q.push(453);
    q.push(35);
   while(!q.empty()){
  cout<<q.front()<<" ";
  q.pop();
   }
   return 0;
}