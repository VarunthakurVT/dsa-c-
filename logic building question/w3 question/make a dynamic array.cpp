#include <iostream>
using namespace std;

int main() {
    int n;
   	int sum=0;
    cin >> n;
     
    // Read numbers and calculate sum
   int *arr=new int[n];
  	for(int i=0;i<n;i++){
	cin>>arr[i];
      sum+=arr[i];
    }
   cout<<"Sum: "<<sum;
    // Print the sum
    return 0;
}
