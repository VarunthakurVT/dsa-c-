#include<iostream>
using namespace std;
void simple_swap(int*a,int*b){
int temp=*a;
*a=*b;
*b=temp;
}
int main(){
    int a=34;
    int b =58;
    cout<<"a "<<a<<endl<<"b "<<b<<endl;
    simple_swap(&a,&b);
    cout<<"a "<<a<<endl<<"b "<<b<<endl;
 return 0;
}