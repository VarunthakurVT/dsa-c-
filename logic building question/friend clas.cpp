#include <iostream>

// Forward declaration is sometimes needed depending on complex dependencies,
// but not strictly required here if we order the classes correctly.
class TargetClass {
private:
    int secretData;

public:
    TargetClass() : secretData(42) {} // Constructor initializes the private data

    // Declare FriendClass as a friend of TargetClass
    friend class FriendClass; 
};

class FriendClass {
public:
    // This function takes an object of TargetClass
    void accessSecret(const TargetClass& target) {
        // Because FriendClass is a friend, it can directly access 'secretData'
        std::cout << "FriendClass accessing private data: " << target.secretData << std::endl;
    }
};

int main() {
    TargetClass myTarget;
    FriendClass myFriend;

    // The friend class successfully reads the private variable
    myFriend.accessSecret(myTarget);

    return 0;
}