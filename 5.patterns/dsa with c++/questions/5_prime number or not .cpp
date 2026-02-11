#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for (int i=2;i<=n-1;i++){
        if (n%i==0){
            cout<<"the number is not prime"<<endl;
            break;
              }
              else{
            cout<<"the number is a prime"<<endl;
            break;
              }
    }
    return 0;
}