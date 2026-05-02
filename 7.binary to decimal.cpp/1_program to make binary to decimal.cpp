#include<iostream>
using namespace std;
int decToBinary(int dec){
int ans=0; 
int pow=1;
while (dec)
{
    int rem=dec%2;
    dec=dec/2;
    ans+=rem*pow;
    pow*=10;
}
return ans;
}
int main(){

    cout<<decToBinary(25);
    return 0;
}

