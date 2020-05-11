#include <iostream>
#include "Sales_item.hpp"

int main()
{
    Sales_item book1, book2;
    int num = 0;
    std::cin >> book1;
    ++num;
    while (std::cin >> book2)
    {
        if (book2.isbn() == book1.isbn()) 
        {
            ++num;
        }
        else
        {
            std::cout << book1 << " " << num << std::endl;
            book1 = book2;
            num = 1;
        }
    }
    std::cout << book1 << " " << num << std::endl;
    return 0;
}