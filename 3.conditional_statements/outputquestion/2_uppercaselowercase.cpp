#include<iostream>
using namespace std; 
int main(){
    char a ;
    cout<<"enter char";
    cin >>a; 
    if(a>='A'&&a<='Z'){
        cout<<"uppercase";
    }
    else if(a>='0'&&a<='9'){
        cout<<"number";
    }else if(a>='a'&&a<='z'){
        cout<<"lowercase";
    }
    else{
       cout<<" special character";
    }
    return 0;
}