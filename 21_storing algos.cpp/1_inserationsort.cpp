#include<iostream>
using namespace std ;
int inseration_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
       int j=i-1;
       while (j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
    }
    for(int i=0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,3,2,4,5,3,2,5,3,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    inseration_sort(arr,n);
}