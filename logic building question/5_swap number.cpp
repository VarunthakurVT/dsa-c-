#include<iostream>
using namespace std;
int swapnumbers(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
    // return *a,*b; in pass by reference no needed to do the return the value and but pass by value you need to return 
}
int main(){
    int a;
    int b;
    cout<<"enter two number";
    cin>>a;
    cin>>b;
    swapnumbers(&a,&b);
//    swap(a,b); this is from the predefined 
    cout<<"value of a ="<<a<<"value of b ="<<b;
}