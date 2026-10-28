#include<iostream>
#include<vector>
using namespace std; 
void bubblesort(vector<int>&arr){
    int n= arr.size();
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(!flag){
            break;
        }
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
    bubblesort(arr);
    print_v(arr);
    return 0;
}