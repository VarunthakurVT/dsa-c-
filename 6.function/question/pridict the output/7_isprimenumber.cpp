#include<iostream>
using namespace std; 
bool is_prime(int n){
    
    for(int i=2;i<n;i++){
        if(i%n==0){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
    cout<<is_prime(5);
    return 0;
}