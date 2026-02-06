#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[4]={5,2,3,1};
    int size=4;
    int smallest=INT_MAX;
    int maximum=INT_MIN;
    for(int i=0;i<size;i++){
//     if(smallest>arr[i]){
//         smallest=arr[i];
//      }
//  we can use min and max function to do this 
   smallest=min(smallest,arr[i]) ;
}
 for(int i=0;i<size;i++){
    // if(max<arr[i]){
    //     max=arr[i];
    
    // } we can use the max function also 
   maximum=max(maximum,arr[i]);

}
cout<<"this is the smallest number  "<<smallest<<endl;
cout<<"this is the maximum number  "<<maximum;
return 0;
}