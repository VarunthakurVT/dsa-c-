#include<iostream>
using namespace std;
int main(){
    int a =30;
    int *ptr=&a;// this saves the address of the a 
    int **ptr1=&ptr; //this stores the address of the pointer veriable this is called pointer to pointer 

    cout<<ptr<<endl; //& operator give the address of the veriable
    cout<<*ptr<<endl; ///this give the value at the adress of a
    cout<<&ptr<<endl; // pointer veriable have also the memory address 
    cout<<ptr1<<endl; //this is the same as &ptr
    cout<<**ptr1<<endl;

    return 0;
}