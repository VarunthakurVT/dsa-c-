#include<iostream>
using namespace std;
int main(){
    int a=4,b=8;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(~b)<<endl;
    cout<<(a^b)<<endl;
    //some increment and decreament operation
    int w=21;
    int x=w++;
    cout<<"Value of w is "<<w<<"   value of x is "<<x<<endl; //this is the example of the post increment 
    int q=32;
    int pre=++q; 
    cout<<"value of q is "<<q<<" value of pre is "<<pre;//this is the example of pre increment 

}