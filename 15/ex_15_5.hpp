#ifndef EX_15_5_HPP
#define EX_15_5_HPP

#include "ex_15_3.hpp"

// 不加 public 默认是 private
class Bulk_quote : public Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& book, double price, std::size_t n, double dis) : Quote(book, price), min_qty(n), discount(dis) {}
    double net_price(std::size_t) const override;
    void debug() const override;

private:
    std::size_t min_qty = 0;
protected:
    double discount = 0.0;
};

double Bulk_quote::net_price(size_t cnt) const {
    if (cnt >= min_qty) return cnt * (1 - discount) * price;
    else return cnt * price;
}

void Bulk_quote::debug() const {
    std::cout << "min_qty: " << this -> min_qty << " "
              << "discount: " << this -> discount << std::endl; 
}


#endif