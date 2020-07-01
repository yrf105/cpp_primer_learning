#ifndef EX_7_15_HPP
#define EX_7_15_HPP

#include<iostream>
#include<string>

using std::istream;
using std::ostream;
using std::string;

struct Person {
    Person () = default;
    Person (const string &n) : name (n) {}
    Person (const string &n, const string &a) : name (n), address (a) {}
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