#include<iostream>
using namespace std; 
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        int m=1;
        for (int j=0;j<i+1;j++){
            cout<<m;
            m++;
        }
        cout<<endl;
    }
     cout<<"this is by another way to do this i think the second one is efficient because we do not declare the variable in this "<<endl;
    for(int i=0;i<n;i++){
      
        for (int j=1;j<=i+1;j++){
            cout<<j;
        
        }
        cout<<endl;
    }
}
