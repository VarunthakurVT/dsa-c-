#include <iostream>

int getNumbers()
{
    return 5;
    return 7;
} 

int main()
{
    std::cout << getNumbers() << '\n';
    std::cout << getNumbers() << '\n'; //print 5 due to in function we can have only one return 
    return 0;
}