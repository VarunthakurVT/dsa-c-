#include<iostream>
using namespace std;
void Hello(){ //void means you can not write the retrun keyword or we can say it does not return the value 
    cout<<"hello"<<endl; //inside the {} is called body of the function 
}//this is the function declaration
int main(){
    Hello(); //() do not forget this in your code 
    Hello();
    Hello();
    Hello();
    Hello();//these are the function call 
    //we can not write like this
    // cout<<Hello(); it will give the syntax error
    return 0;
}
//nested function is not allowed in cpp like 
/* int main(){
 int hello(){
 cout<<"hello";
 };
 hello()
 }*/
//best pratice is to make in the top of the main function 