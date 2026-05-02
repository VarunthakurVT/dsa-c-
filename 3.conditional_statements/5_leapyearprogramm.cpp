#include<iostream>
using namespace std;
int main(){
    int year=2034;
    if ((year%400==0) || (year%100!=0&&year%4==0)){
        cout<<"leap year";
    }else{
        cout<<"not a leap year";
    }
    return 0;
}