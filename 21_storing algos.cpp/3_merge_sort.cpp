#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,int p,int q,int r){
int n1=q-p+1;
int n2=r-q;
vector<int>L(n1),R(n2);
for (int i = 0; i < n1; i++)
{
    L[i]=arr[p+i];
}
for(int j=0;j<n2;j++){
    R[j]=arr[q+j+1];
}
int i=0;int j=0 ;int k=p;
while (i<n1&&j<n2)
{
    if(L[i]<=R[j]){
        arr[k]=L[i];
        i++;
    }
    else{
        arr[k]=R[j];
        j++;

    }
    k++;
}
while(i<n1){
    arr[k]=L[i];
    i++;
    k++;
}
while(j<n2){
    arr[k]=R[j];
    j++;
    k++;
}
}


void merge_sort(vector<int>&arr,int p,int r){
    if(p<r){
        
    

   int q=p+(r-p)/2;
    merge_sort(arr,p,q);
    merge_sort(arr,q+1,r);
    merge(arr,p,q,r);
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
    merge_sort(arr,0,n-1);
    print_v(arr);
    return 0;
}
