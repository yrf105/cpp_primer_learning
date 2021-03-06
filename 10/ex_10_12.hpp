// 头文件的命名不能以数字开头
#ifndef EX_10_12_HPP
#define EX_10_12_HPP

#include<string>
#include<iostream>

using std::string;
using std::istream;
using std::ostream;

class Sales_data;
istream &read (istream &, Sales_data &);
ostream &print (ostream &, const Sales_data &);
Sales_data add (const Sales_data &, const Sales_data &);

class Sales_data {
    friend istream &read (istream &, Sales_data &);
    friend ostream &print (ostream &, const Sales_data &);
    friend Sales_data add (const Sales_data &, const Sales_data &);

public :
    Sales_data () = default;
    Sales_data (const string &s) : bookNo (s) {}
    Sales_data (const string &s, unsigned n, double p) : bookNo (s), units_sold (n), revenue (n * p) {}
    Sales_data (istream &is) { read (is, *this);} 
    string isbn () const {return bookNo;}
    Sales_data &combine (const Sales_data &);

private :
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data &Sales_data::combine (const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &read (istream &is, Sales_data &item) {
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

ostream &print (ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add (const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

#endif