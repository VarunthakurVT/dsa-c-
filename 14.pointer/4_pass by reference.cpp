//there are two types of parameters
//call by value--gives the copy
//call by reference -- gives the original value
#include<iostream>
using namespace std;
void change(int &ptr){
    ptr=30;
}
int main(){
    int a=34;
    change(a);
    cout<<a;
    return 0;
}