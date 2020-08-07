#include <iostream>

int main() {
    int a = 42, b = 43;
    int *p = nullptr;
    std::cout << p << std::endl;
    p = &a;
    std::cout << p << std::endl;
    *p = b;
    std::cout << a << std::endl;
    return 0;
}