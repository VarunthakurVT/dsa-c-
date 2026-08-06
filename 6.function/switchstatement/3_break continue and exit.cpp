#include<iostream>
using namespace std;
int main(){
    for(int i =0;i<5;i++){
        if (i==3)
        {
            cout<<"break"<<endl;
            break;
        }
        
        cout<<i<<endl;
    }
    for(int i =0;i<5;i++){
        if (i==3)
        {
            cout<<"continue"<<endl;
            continue;
        }
        
        cout<<i<<endl;
    }
    for(int i =0;i<5;i++){
        if(i==2){
            exit(i);
        }
        
        cout<<i;
    }
    cout<<"this never runs ";
    return 0;
}