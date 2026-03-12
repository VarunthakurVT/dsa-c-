#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"Enter a number: ";
    cin>>n;
    if (n<=1){
        cout<<n<<" is not a prime number";

    }else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                count++;
                break;
            }
        }
        if(count<0){
            cout<<n<<" is not a prime number";
        }else{
            cout<<n<<" is  a prime number";
        }
    }
    return 0;
} 