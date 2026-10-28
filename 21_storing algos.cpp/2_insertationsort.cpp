#include<iostream>
#include<vector>
using namespace  std;
void insertationSort(vector<int>&arr){
    int n= arr.size();
    for(int i =1; i<n;++i){
       int  key=arr[i];
        int j=i-1;
        while (j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;

        }
        arr[j+1]=key;
        
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
    insertationSort(arr);
    print_v(arr);
    return 0;
}
