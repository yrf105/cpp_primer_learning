#include <iostream>
#include "Sales_item.hpp"

int main(){
    Sales_item book;
    Sales_item book_sum;
    while (std::cin >> book)
        book_sum += book;
    
    std::cout << book_sum << std::endl;
}