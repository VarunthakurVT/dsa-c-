#include<iostream>
using namespace std;
int main(){
    int result{};
    char check{};
int num{};
int num2{};
 cout<<"enter the first number";
 cin>>num;
 cout<<"enter the second number";
 cin>>num2;

 cout<<"press a to add numbers"<<'\n';
 cout<<"press s to subtract numbers"<<'\n';
 cout<<"press m to multiply numbers"<<'\n';
 cout<<"press d to divide numbers"<<'\n';
 cin>>check;
  
 if(check=='a'){
    result=num+num2;
 
 }
 else if(check=='s'){
    result=num-num2;
 
 }
 else if(check=='m'){
    result=num*num2;
 
 }
 else if(check=='d'){
    result=num/num2;
 
 }
 else{
    cout<<"enter correct character ";
 }
cout<<result;
 return 0;
}
