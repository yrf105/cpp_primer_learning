/**
 * ex_13_27 行为像指针的类
**/

#ifndef HAS_PTR_HPP
#define HAS_PTR_HPP

#include <string>

class HasPtr {

public:
    HasPtr(const std::string &s = std::string()):
        ps(new std::string(s)), i(0), use_count(new int(1)) {}
    HasPtr(const HasPtr& hp):
        ps(hp.ps), i(hp.i), use_count(hp.use_count) { ++(*hp.use_count); }
    HasPtr& operator= (const HasPtr &hp) {
        ++(*hp.use_count);
        std::string *temp_ps = hp.ps;
        if (--(*use_count) == 0) {
            delete ps;
            delete use_count;
        }
        ps = temp_ps;
        i = hp.i;
        use_count = hp.use_count;
        return *this;
    }
    ~HasPtr(){
        delete ps;
    };

private:
    std::string *ps;
    int i;
    int *use_count;
};

#endif