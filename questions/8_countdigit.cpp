#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    
    // Handle 0 separately
    if (num == 0) {
        cout << "Digits: 1" << endl;
        return 0;
    }
    
    // Make positive for negatives
    if (num < 0) num = -num;
    
    while (num > 0) {
        num /= 10;
        count++;
    }
    
    cout << "Digits: " << count << endl;
    return 0;
}
