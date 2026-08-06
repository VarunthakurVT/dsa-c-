#include<iostream>
using namespace std ;
void storearray(int arr[],int size){
 for(int i=0;i<size;i++){
        cout<<"enter the array digit...";
        cin>>arr[i];
        
    }
    cout<<"=============================storing done========================="<<endl;
    }

void printarray(int arr[],int size){
  for(int i=0;i<size;i++){
        
        cout<<arr[i]<<endl;
    }
    cout<<"==============================printing done=========================="<<endl;
}
int main(){
    int arr[10];
    int size=10;
   storearray(arr,5);
 printarray(arr,5);
    return 0;
}