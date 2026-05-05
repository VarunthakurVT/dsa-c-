#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string item;
    double price;
    int quantity;
    getline(cin, item);
    cin >> price >> quantity;
     
    // Calculate total and print receipt
   cout<<"Item: "<<item<<endl;
   cout<<"Price: "<<fixed<<setprecision(2)<<float(price)<<endl;
   cout<<"Quantity :"<<quantity;
  float total=price*quantity;
   cout<<"Total: "<<fixed<<setprecision(2)<<float(total)<<endl;
  
    return 0;
}
