#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
int price{};
    // Determine ticket type and price
  if(age<12){
    price=5;
    cout<<"Child"<<endl<<'$'<<price;
  }else if(age>=12&&age<65){
    price=15;
    cout<<"Adult"<<endl<<'$'<<price;
  }else{
    price=8;
    cout<<"Senior"<<endl<<'$'<<price;
  }
 
    // Print results
    return 0;
}
