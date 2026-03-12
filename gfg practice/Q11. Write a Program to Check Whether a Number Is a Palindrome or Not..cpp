#include<iostream>
using namespace std;
int main(){
    int num=343;
    int t=num;
    int rev=0;
  
    while(t>0){
        int dig = t % 10;
        rev = rev * 10 + dig;
        t /= 10;
    }
    if(num==rev){
        cout<<num<<" is a paindrome number";
    }else{
        cout<<"is not paindrome";

    }
    return 0;
}