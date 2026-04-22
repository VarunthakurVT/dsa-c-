//this is the bad practice to use using namespace std 
//why we use std (standard)
//the iostream is the standard library it have the many predefined tools 
//to prevent the mixing these tools we use the std 
// this std have not just the cout and cin function but this have many functions inside it 
// if you damp using namespace std in your code it will just damp the large number of tool even you do not need this will cause the memory wastage
//if you not use the using namespace std there is 2 company standard 
//option 1 
//just write std::cin (std::before that tool )

//option 2
#include<iostream>
using std::cin; //this is the manual way to grab tool to save memory in the company 
using std::cout;
int main (){
    int a {}; //and also this is the correct way to declare the variable to prevent the grabage value
    cin>>a;
    cout<<a;
    return 0;
}
