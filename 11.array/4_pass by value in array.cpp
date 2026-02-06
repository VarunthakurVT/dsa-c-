#include<iostream>
using namespace std ;
void changearr(int arr[],int size){
    cout<<"in function "<<endl ;
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}
int main(){
    int arr[4]={2,3,4,5};
    int size=4;
    changearr(arr,4);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}
//this is the pass by value =
    

