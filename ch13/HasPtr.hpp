/**
 * ex_13_5 
 * ex_13_8
 * ex_13_11
 * ex_13_22
 * ex_13_30
 * ex_13_31
**/

#ifndef HAS_PTR_HPP
#define HAS_PTR_HPP

#include <string>
#include <iostream>

class HasPtr {
    friend void swap(HasPtr&, HasPtr&);

public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr& hp):
        ps(new std::string(*(hp.ps))), i(hp.i) {}
    HasPtr& operator= (const HasPtr &hp) {
        if (this != &hp) {
            std::string *temp_ps = new std::string(*(hp.ps));
            delete ps;
            ps = temp_ps;
            i = hp.i;
        }
        return *this;
    }
    bool operator< (const HasPtr &hp) {
        return *ps < *hp.ps;
    }
    ~HasPtr(){
        delete ps;
    };

private:
    std::string *ps;
    int i;
};

inline
void swap(HasPtr &lhs, HasPtr &rhs){
    using std::swap;
    swap(lhs.i, rhs.i);
    swap(lhs.ps, rhs.ps);
    std::cout << "swap run" << std::endl;
}
#endif