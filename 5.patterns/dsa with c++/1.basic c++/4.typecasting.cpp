//there are two types of typecasting 1 is conversion(implicit)
//2 is casting (explicit)
#include<iostream>
using namespace std;
int main(){
char a='A';
int new_a=a;
cout << new_a << endl; //this is the implicit small to big and also this give the ascii value of A
float price =200.99;
int  new_price=(int)price;
cout << new_price << endl; //this is explicit big to small 
return 0;

}