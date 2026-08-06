#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i=1;
    while(i<=n){
        int j=1 ;
        int k =1;
        while (k<=n-i)
        {
            cout<<" ";
            k++;
        }
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        int l=1;
        
        while (l<i)
        {
            cout<<i-l;
            l++;
        }
        

        cout<<endl;
        i++;
        
    }
}