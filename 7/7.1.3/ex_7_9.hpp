#ifndef EX_7_9_HPP
#define EX_7_9_HPP

#include<iostream>
#include<string>

using std::istream;
using std::ostream;
using std::string;

struct Person {
    auto get_name() const -> string const& {return name;}
    auto get_address() const -> string const& {return address;}

    string name;
    string address;
};

istream &read (istream &is, Person &item) {
    is >> item.name >> item.address;
    return is;
}

ostream &print (ostream &os, const Person &item) {
    os << item.name << " " << item.address;
    return os;
}

#endif