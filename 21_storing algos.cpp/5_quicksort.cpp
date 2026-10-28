#include<iostream>
#include<vector>
using namespace std; 
int partition(vector<int>&arr, int p ,int r){
    int x=arr[r];
 int i =p-1;
 for(int j =p;j<r;j++){
    if(arr[j]<=x){
        i=i+1;
        swap(arr[i],arr[j]);
    }
}
swap(arr[i+1],arr[r]);
   return i+1; 
}

void quick_sort(vector<int>&arr,int p,int r){
    if(p<r){
    int q=partition(arr,p,r);
    quick_sort(arr,p,q-1); 
    quick_sort(arr,q+1,r);
    }
}
void print_v(vector<int>&arr){
    int n=arr.size();
    for(int i=0 ;i<n; i++ ){
        cout<<arr[i]<<" ";
    }
}
int main(){
     vector<int>arr={1,2,4,2,4,23,45,23};
    int n=arr.size();
    quick_sort(arr,0,n-1);
    print_v(arr);
    return 0;
}