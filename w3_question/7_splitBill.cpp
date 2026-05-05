#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double total;
    int people;
    cin >> total >> people;

    // Calculate and print
    double ePays=total/people;
  	cout<<"Each pays: "<<fixed<<setprecision(2)<<ePays;
    return 0;
}
