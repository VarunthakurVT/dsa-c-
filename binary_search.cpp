#include<iostream>
using namespace std; 
int binary_search(int arr[],int size ,int key){
int start =0;
int end =size-1;

while(start<=end){
     int mid = start + (end - start) / 2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
  
}
return -1;

}
int main(){
    int arr[6]={1,2,3,4,5,6};
   cout<< binary_search(arr,6,4);
}