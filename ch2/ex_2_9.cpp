#include <iostream>

int main() {
    int input_value;
    std::cin >> input_value;
    // error: narrowing conversion of '3.1400000000000001e+0' from 'double' to 'int' inside { }
    // int i = { 3.14 };
    // 3
    int i = (3.14);
    // (c)
    double wage;
    double salary = wage = 9999.99;
    // (d)
    // 3
    int ii = 3.14;
    std::cout << ii << std::endl;
    return 0;
}