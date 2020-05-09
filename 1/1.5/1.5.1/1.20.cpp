#include <iostream>
#include "Sales_item.hpp"

int main ()
{
    // 文件重定向操作必须再 cmd 里执行
    Sales_item item1;
    while (std::cin >> item1)
    {
        std::cout << item1 << std::endl;
    }
    
    return 0;
}