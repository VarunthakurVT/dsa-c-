#include<iostream>
using namespace std;
//this is to calculate the sum 
int sum (int a,int b){
    int s=a+b;
    return s;
}
//create the min function 
int min(int c,int d){ //parameter
    if(c>d){
        return c;

    }
    else{
        return d;
    }                      
}
int main(){
   cout<<sum(23,43)<<endl;
   cout<<min(34,45); //argnument
   return 0;
}
