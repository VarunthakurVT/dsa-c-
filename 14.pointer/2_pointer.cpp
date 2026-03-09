#include<iostream>
using namespace std;
int main(){
    int a =30;
    int *ptr=&a;// this saves the address of the a.
    int **ptr1=&ptr; //this stores the address of the pointer veriable this is called pointer to pointer 

    cout<<ptr<<endl; //if we print ptr it gives the address of the a hexadecimal form 

    cout<<*ptr<<endl; ///this give the value at the address of a 
    cout<<&ptr<<endl; // pointer variable have also the memory address  &ptr also prints the address of ptr variable
    cout<<ptr1<<endl; //this is the same as &ptr this is pointer to pointer variable
    cout<<**ptr1<<endl; //this print the value at address of the ptr1 
  
    //this is a copy pointer and this is like done by int *q=ptr; where q is the new variable and ptr is the old
    int *q=ptr;
  cout<<q<<"  "<<ptr<<endl;
  cout<<*q<<" "<<*ptr<<endl;

  //if we do *ptr++::then it add one in the value a at a like this
 ( *ptr)++;
//  ptr++	The address (moves to next memory slot)	The original address
// *ptr++	The address (moves to next memory slot)	The original value
  cout<<ptr<<endl;
  ptr++;
  cout<<a<<endl;
  cout<<*ptr;
    return 0;
}