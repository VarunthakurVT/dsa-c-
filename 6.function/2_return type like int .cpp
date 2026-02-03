#include<iostream>
using namespace std;
int Hello(){  //we use int it return integer value
    cout<<"hello"<<endl;
    return 3; //this return 3
}//this is the function declaration
int main(){
   int  num=Hello(); //num store the value of return 
   cout<<num;
    //this is the function call 
    //we can do like this 
    cout<<Hello()<<endl; //this do like same as the previous
    return 0;
}