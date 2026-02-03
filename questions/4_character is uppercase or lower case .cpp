#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a character:";
    cin>>c;
    if(c>='a'&&c<='z'){
        cout<<"lower case letter";
    }else{
        cout<<"upper case letter";
    }
    return 0;
}