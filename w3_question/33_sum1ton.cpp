#include <iostream>
using namespace std;

int main() {
    int n, total = 0;
    cin >> n;

    // Calculate and print the sum
  for(int i=n;i>0;i--){
    total=i+total;
    
  }
  cout<<"Sum: "<<total;
    return 0;
}
