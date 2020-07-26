#ifndef DISC_QUOTE_HPP
#define DISC_QUOTE_HPP

#include "ex_15_3.hpp"

class Disc_quote : public Quote{

public:
    Disc_quote() = default;
    Disc_quote(const std::string& book, double price, 
                std::size_t qty, double disc) : 
                Quote(book, price), 
                quantity(qty),
                discount(disc) { }
    double net_price(std::size_t) const = 0;


protected:
    // 折扣适用的购买量
    std::size_t quantity = 0;

    // 表示折扣的小数值
    double discount = 0.0;

};

#endif // DISC_QUOTE_HPP