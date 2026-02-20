#include<iostream>
using namespace std;
int main(){
    int a =30;
    int *ptr=&a;
    cout<<ptr<<endl; //& operator give the address of the veriable
    ptr++;//4 bites added
    cout<<ptr<<endl; //& operator give the address of the veriable
    ptr--;
    cout<<ptr<<endl; //& operator give the address of the veriable

    //addition and subtraction
    ptr=ptr+2;//2 int +8
        cout<<ptr<<endl; //& operator give the address of the veriable

    return 0;
}