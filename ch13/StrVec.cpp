#include "StrVec.hpp"
#include <iostream>
#include <vector>

int main() {
    StrVec sv;
    sv.push_back(std::string("yue"));
    sv.push_back(std::string("rui"));
    sv.push_back(std::string("feng"));
    StrVec sv2(sv);
    std::cout << sv.begin() << " " << sv.end() << " " << sv.capacity() << std::endl;
    std::cout << sv2.begin() << " " << sv2.end() << " " << sv2.capacity() << std::endl;
    sv2.reserve(10);
    std::cout << sv2.begin() << " " << sv2.end() << " " << sv2.capacity() << std::endl;
    sv2.reserve(5);
    std::cout << sv2.begin() << " " << sv2.end() << " " << sv2.capacity() << std::endl;
    std::cout << "===================" << std::endl;
    std::vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(2);
    ivec.push_back(3);
    std::cout << ivec.capacity() << std::endl;
    std::vector<int> ivec2(ivec);
    std::cout << ivec2.capacity() << std::endl;

    return 0;
}