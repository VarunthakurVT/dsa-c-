#include<iostream>
#include<climits>
using namespace std; 
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int max_sum=INT_MIN;
    for(int st=0;st<n;st++){
        int currentsum=0;
        for (int end=st;end<n;end++){
         currentsum+=arr[end];
         max_sum=max(currentsum,max_sum);
        }
        
    }
    cout<<"max sub array sum "<<max_sum;
return 0;
}