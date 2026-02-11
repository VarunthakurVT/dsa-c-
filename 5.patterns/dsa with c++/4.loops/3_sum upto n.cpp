#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number you want sum upto";
    cin>>n;
    int sum=0;
    for (int i=1;i<=n;i++){
  sum+=i;
    }
    cout<<"sum= "<<sum;
    return 0;
}