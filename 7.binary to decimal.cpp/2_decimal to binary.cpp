#include<iostream>
using namespace std;
int binaryToDec(int binary){
    int ans=0;
    int  pow=1;
    while(binary>0){
        int rem=binary%10;
        ans+=rem*pow;
        binary/=10;
        pow*=2;
        
    }
    return ans;
}
int main(){
   cout<< binaryToDec(101);
    return 0;
}
