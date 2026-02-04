//we are going to calculate the sum of the number 
#include<iostream>
using namespace std; 
int main(){
    int digitsum =0;
    int num=12;
    while (num>0)
    {
       int lastdigit=num%10;
    num=num/10;
    digitsum+=lastdigit;
    }
    cout<<digitsum;
    return 0; 

}