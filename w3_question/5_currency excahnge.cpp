#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double amount, rate;
    cin >> amount >> rate;

    // Calculate and print result
  double result=amount*rate;
  cout<<"Result:"<<fixed<<setprecision(2)<<double(result);
    return 0;
}
