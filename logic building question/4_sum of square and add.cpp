#include<iostream>
using namespace std; 
int main(){
int num;
int square=0;
int sum=0;
cout<<"Enter the number";
cin>>num;
for(int i=1;i<=num;i++){
square=i*i;
sum=square+sum;
}
cout<<sum;
return 0;
}
//read question carefully