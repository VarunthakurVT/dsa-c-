#include<iostream>
using namespace std; 
bool is_even(){
    int a;
    cin>>a;
    if(a&1){
        return 0;
    }
    return 1;
}
int main(){
    cout<<is_even();
    return 0;
}