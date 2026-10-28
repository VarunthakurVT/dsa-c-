#include<iostream>
using namespace std; 
int var(int a){
    
    int n=a-1;
    cout<<n;
    return n+1;
}
int main(){
    int x=1;
    int y=2;
    int z=3;

   int a= var(x);
  int  b= var(y);
  int  c= var(z);

     cout<<a<<b<<c;

     
    return 0;

}