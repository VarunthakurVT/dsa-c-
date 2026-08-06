#include<iostream>
using namespace std; 
int main(){
    int n=4;
    int i=1;
    while(i<=n){
        int k=n;
        while(k>n-i){
            cout<<" ";
            k--;
        }
        int j =n;
        while(j>=i){
            cout<<i;
            j--;
        }
        cout<<endl;
        i++;

    }
    return 0;
}