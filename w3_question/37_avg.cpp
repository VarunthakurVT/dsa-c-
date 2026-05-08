#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
  float avg;
  int sum=0;
    cin >> n;

    // Read scores and calculate average
    int *arr=new int[n];
    for (int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
     sum+=arr[i];
      }
   avg=sum/n;
  cout<<"Average: "<<fixed<<setprecision(1)<<float(avg);
    // Print the average
    return 0;
}
