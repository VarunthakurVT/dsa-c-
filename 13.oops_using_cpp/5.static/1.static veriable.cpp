#include<iostream>
using namespace std; 
void fun(){
    //int x=0; //without static keyword it always prints 0 because it initillyed to 0 but when we convert it into the static 
    //it not renitilized
    static int x=0;//in this we convert it into static so x is increasing
    cout<<x<<endl;
    x++;
}
int main(){
    fun();
    fun();
    fun();
}