#include<iostream>
using namespace std;
int search(int arr[],int size,int target)
{
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }}
   return -1;
 }
 int main(){
    int arr[4]={2,5,6,4};
    int size=4;
    int target=4;
    cout<<search(arr,size,target)<<endl;
    
 }
    
