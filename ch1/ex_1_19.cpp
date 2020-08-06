#include <iostream>

int main ()
{
    int a = 0, b = 0;
    std::cout << "input a and b" << std::endl;
    std::cin >> a >> b;
    if (a <= b)
    {
        while (a <= b)
        {
            std::cout << a++ << std::endl;
        }
    }
    else
    {
        std::cout << "a should smaller than b" << std::endl;
    }
    
    return 0;
}