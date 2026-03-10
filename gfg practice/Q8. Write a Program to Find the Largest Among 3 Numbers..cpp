#include<iostream>
using namespace std; 
int main(){
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<a<<" is greatest";
    }
    else if(b>c&&b>a){
        cout<<b<<" is the greatest";
    }else{
        cout<<c<<" is the greatest";
        }
        return 0;
    }
