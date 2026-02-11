#include<iostream>
using namespace std;
int main(){
    int n=4;
    //this is for line 
    for(int i=0;i<n;i++){
        //this is for spaces
        for (int j=0;j<i;j++){
        cout<<" ";}
    //this is for numbers
        for(int j=1;j<=n-i;j++){
            cout<<i+1;
            
        }
        cout<<endl;
    }

}