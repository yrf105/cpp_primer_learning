#include <iostream>

int main()
{
    int a, b;
    std::cout << "input a and b" << std::endl;
    std::cin >> a >> b;
    while (a <= b)
    {
        std::cout << a++ << std::endl;
    }
    
    return 0;
}