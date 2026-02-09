#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    
    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    
    cout << "Reversed: " << reversed << endl;
    return 0;
}
