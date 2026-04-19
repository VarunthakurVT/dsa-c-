//by deque we can do the push and pop form the front and the back 
#include<iostream>
#include<deque>
using namespace std ;
int main (){
    deque<int>dq;
    dq.push_back(34);
    dq.push_back(5343);
    dq.push_front(34);
    cout<<dq.front()<<" "<<dq.back();
    return 0; 

}