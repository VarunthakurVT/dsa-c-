// swaping the alternative 
#include<iostream>
using namespace std; 
int aswap(int arr[],int n){
    int j=1;
    for(int i=0;i<n;i+=2){
       if(i+1<n){ 
        swap(arr[i],arr[i+1]);
       }

    }
    
    
    

}
int print(int arr[],int n){
    for ( int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
}
int main(){
    int arr2[9];
int arr[5]={1,2,3,4,5};


aswap(arr,5);
print(arr,5);
return 0 ;
}
