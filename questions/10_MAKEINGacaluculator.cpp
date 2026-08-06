#include<iostream>
using namespace std;
int main(){
    int i;
    int x;
    cout<<"enter the numbers"<<endl;
    cin>>i>>x;
    char ch;
    cout<<"enter the operator";
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<i+x;
        break;
    case '-':
        cout<<i-x;
        break;
    case '*':
        cout<<i*x;
        break;
    case '/':
        cout<<i/x;
        break;
    
    default:
    cout<<"enter the operator and the number";
        break;


    }
    return 0;
}