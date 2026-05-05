#include <iostream>
using namespace std;

int main() {
    string password;
    getline(cin, password);

    // Check length and print
   if(password.size()>=8){
     cout<<"Valid";
   }else{
     cout<<"Invalid";
   }
    return 0;
}
