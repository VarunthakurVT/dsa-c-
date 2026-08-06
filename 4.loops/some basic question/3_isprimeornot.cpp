#include<iostream>
using namespace std; 
int main(){
    int n=11;
    bool is_prime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            // cout<<"not a prime number ";
           is_prime=0;
            break;
        }/*else{
             cout<<"prime number";
            break;
        }*/
    }
    if(is_prime==1){
        cout<<"prime number ";
    }else{
        cout<<"not a prime number ";
    }
    return 0;
}