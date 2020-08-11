#ifndef X_HPP
#define X_HPP

#include <iostream>

struct X {
    X() {std::cout << "X()" << std::endl;}
    X(const X&) {std::cout << "X(const X&" << std::endl;}
    X& operator= (const X&) {
        std::cout << "operator=" << std::endl;
        return *this;
    }
    ~X(){std::cout << "~X" << std::endl;}
};


#endif