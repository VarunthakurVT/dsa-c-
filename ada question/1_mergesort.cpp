#include<iostream>
#include<vector>
using namespace std; 
void mearge(vector<int>&arr, int left, int right, int mid){
    int n1=mid-left+1;
    int n2=mid-right;
    // creating the temp vector
    vector<int>L(n1),R(n2);
    for(int i =0 ;i<n1;i++){
        L[i]=arr[left+1];}
    for(int j =0; i<n2;j++){
        R[i]=arr[mid+1+j]
    }
}