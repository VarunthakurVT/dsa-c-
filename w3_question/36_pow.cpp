#include <iostream>
using namespace std;

long long power(int base, int exp) {
// Calculate base^exp using a loop
  long long result=1;
  for(int i=1;i<=exp;i++){
   result*= base;
  }
  return result;
}
  int main(){
    
    int base,exp;
    cin>>base;
    cin>>exp;
    cout<<"Result: "<<power(base,exp);
    // cout<<result;
  
    return 0;
}
