#include<iostream>
#include<vector>
using namespace std ;
void heapify(vector<int>&arr,int n ,int i){     
    int largest=i;
    int L=i*2+1;
    int R=i*2+2;
    if(L<n&& arr[L]>arr[largest]){
        largest=L;
    }
    if(R<n&& arr[R]>arr[largest]){
        largest=R;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }

}
void heap_sort(vector<int>&arr){
    int n= arr.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
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
    heap_sort(arr);
    print_v(arr);
    return 0;
}