#include <iostream>

int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;
    // 注意 " * " 不能写成 ' * ' 样，c++ 双引号是字符串，'' 是字符
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    return 0;
}