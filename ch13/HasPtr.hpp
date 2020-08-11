/**
 * ex_13_5 
 * ex_13_8
 * ex_13_11
**/

#ifndef HAS_PTR_HPP
#define HAS_PTR_HPP

#include <string>

class HasPtr {

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
    ~HasPtr(){
        delete ps;
    };

private:
    std::string *ps;
    int i;
};

#endif