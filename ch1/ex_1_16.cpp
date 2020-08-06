#include <iostream>

int main(){
    int sum = 0, value = 0;
    // 在 win 中 Ctrl+z 表示文件结束符
    // 在 Linux 中 Ctrl+d 表示文件结束符
    while (std::cin >> value) sum += value;
    std::cout << sum << std::endl;
    return 0;
}