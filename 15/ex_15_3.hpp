#ifndef EX_15_3_HPP
#define EX_15_3_HPP

#include <string>
#include <iostream>

class Quote {

public:
    Quote() = default;
    Quote(const std::string &book, double salses_price) : bookNo(book), price(salses_price) { }
    std::string isbn() const {return bookNo;}
    virtual double net_price(std::size_t n) const {return n * price;}
    virtual void debug() const;
    virtual ~Quote() { };

private:
    std::string bookNo;

protected:
    double price = 0.0;

};

// double print_total(std::ostream &os, const Quote &item, size_t n) {
//     double ret = item.net_price(n);
//     os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
//     return ret;
// }

void Quote::debug() const {
    std::cout << "isbn: " << this -> bookNo << " "
              << "price: " << this -> price << std::endl; 
}

#endif