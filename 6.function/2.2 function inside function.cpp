//we can do like this 
#include <iostream>

int add(int x, int y, int z)
{
    return x + y + z;
}

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    std::cout << multiply(add(1, 2, 3), 4) << '\n';
   //answer of this is 24 and we can call function like this also multiply(add(3,4,5)4)
    return 0;
}