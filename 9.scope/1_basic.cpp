//there are two types of scope---
//1)local (that can be assessable with in the block of code like if-else,function,loops,{})
//2)global
#include <iostream>
using namespace std;
int main() {
   int a=10;
   if(a>=10){
    int a=100;
    cout<<"this is the example of local scope  "<<a<<endl;
    }
    cout<<"this is the example of local scope  "<<a;
    return 0;
}