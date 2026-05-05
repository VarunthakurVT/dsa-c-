#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

   int digit[3];
    // Extract and print each digit
   int count=0;
    for(int i =0; i<3;i++){
      
   
      digit[i]=n%10;
      n/=10;
      
      count++;
    }
    cout<<"Hundreds: "<<digit[2]<<endl;
    cout<<"Tens: "<<digit[1]<<endl;
    cout<<"Ones: "<<digit[0]<<endl;
     
    return 0;
}
