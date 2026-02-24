#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}