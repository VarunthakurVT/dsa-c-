#include<iostream>
#include<vector>
using namespace std;
void selectionStort(vector<int>&arr){
  int  n=arr.size();
   for(int i=0;i<n-1;i++){
    int min=arr[i];
    int loc=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            loc=j;
        }

    }
    swap(arr[i],arr[loc]);
   }
}
void print_v(vector<int>&arr){
   int  n=arr.size();
        for(int i=0; i<n;i++){
            cout<<arr[i]<<" ";

        }
}
int main(){
    vector<int>arr={1,2,4,2,4,23,45,23};
    selectionStort(arr);
    print_v(arr);
    return 0;
    
}