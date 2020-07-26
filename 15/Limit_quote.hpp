#ifndef LIMIT_QUOTE_HPP
#define LIMIT_QUOTE_HPP

#include "Disc_quote.hpp"

class Limit_quote : public Disc_quote{
public:
    Limit_quote(const std::string& book, double price, 
                std::size_t qty, double disc) : 
                Disc_quote(book, price, qty, disc) { }
    double net_price(std::size_t) const override;
};

double Limit_quote::net_price(std::size_t cnt) const {
    return cnt * price * (cnt < quantity ? 1 - discount : 1 ); 
}

#endif // Limit_quote