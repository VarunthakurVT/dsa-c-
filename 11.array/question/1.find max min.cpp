#include<iostream>
#include<climits>
using namespace std; 
int main(){
    int min=INT_MAX;
    int max=INT_MIN;
    int arr[8]={2,43,54,234,435,234,543,354};
    for(int i=0;i<8;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }

    }
    cout<<"max is :"<<max<<"/n and min is "<<min;
    return 0;
}