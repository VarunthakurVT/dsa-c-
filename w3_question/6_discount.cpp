#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price;
    int discountPercent;
    cin >> price >> discountPercent;

    // Calculate discount and final price
    double  discount=price*discountPercent/100;
  	double fprice=price-discount;
  	 cout<<"Discount: "<<fixed<<setprecision(2)<<discount;
    cout<<"Final price:"<<fixed<<setprecision(2)<<price;
    // Print results
    return 0;
}
