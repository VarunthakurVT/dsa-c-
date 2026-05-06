#include <iostream>
#include <iomanip>
using namespace std;

void calculateTip(double bill, int tipPercent) {
    // Calculate tip and total
  cout<<"Bill: $"<<fixed<<setprecision(2)<<bill<<"\n";
    double tip=bill*tipPercent/100;
  cout<<"Tip: $"<<fixed<<setprecision(2)<<tip<<"\n";
    double total=tip+bill;
  cout<<"Total: $"<<fixed<<setprecision(2)<<total<<"\n";
    // Print formatted results
}

int main() {
    double bill;
    int tipPercent;
    cin >> bill >> tipPercent;

    calculateTip(bill, tipPercent);
    return 0;
}
