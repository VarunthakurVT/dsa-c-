#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int>& vec) {
    int result = 0;
    for (int num : vec) {
        result ^= num;
    }
    return result;
}

int main() {
    vector<int> vec = {4, 1, 2, 1, 2};
    cout << findUnique(vec) << endl;  
    return 0;
}
