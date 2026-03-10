#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value  of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin >>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"value of a = "<<a;
    cout<<"value of b = "<<b;

}