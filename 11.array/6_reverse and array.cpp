#include<iostream>
using namespace std ;
void reversearray(int arr[],int size)
{
    int start=0,end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
 int arr[4]={1,2,3,4};
 int size =4;
 //before swap 
 for (int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
//after swap
reversearray(arr,size);
for (int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
