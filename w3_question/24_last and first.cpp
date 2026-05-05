#include <iostream>
using namespace std;

int main() {
    int num, low, high;
    cin >> num >> low >> high;

    // Check and print
   if(num<=high&&num>=low){
     cout<<"In range";
   }else{
     cout<<"Out of range";
   }
    return 0;
}
