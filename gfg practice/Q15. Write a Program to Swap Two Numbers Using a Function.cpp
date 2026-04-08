#include<iostream>
using namespace std;
int swap(int &a,int &b){ //pass by value to change core
    int temp{};
     
    temp=a;
    a=b;
    b=temp;
    // return a,b;
}
int main(){
    int a=34;
    int b=45;
    swap(a,b);
    cout<<b;

}
