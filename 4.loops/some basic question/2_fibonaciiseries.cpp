#include<iostream>
using namespace std; 
int main(){
    int n=10;
    int series=0;
    int prv=1;
    cout<<series<<" "<<prv<<" ";
    for(int i=0;i<n;i++){
       int sum=series+prv;
      cout<<sum<< " ";
       series=prv;
       prv=sum;
    }
    return 0;
}