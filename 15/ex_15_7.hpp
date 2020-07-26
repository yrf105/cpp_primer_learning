#ifndef EX_15_7_HPP
#define EX_15_7_HPP

#include "ex_15_5.hpp"

class limitation_quote : public Bulk_quote {

public:
    limitation_quote() = default;
    limitation_quote(const std::string& book, double price, std::size_t n, double dis, size_t l) 
        : Bulk_quote(book, price, n, dis), limitation_n(l) {}
    double net_price(std::size_t) const override;
    void debug() const override;

private:
    size_t limitation_n;

};

double limitation_quote::net_price(size_t n) const {
    if (n <= limitation_n) return n * discount * price;
    else return (n - limitation_n) * price + limitation_n * discount * price;
}

void limitation_quote::debug() const {
    std::cout << "limitation_n: " << this -> limitation_n <<  std::endl; 
}

#endif