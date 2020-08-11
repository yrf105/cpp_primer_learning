#ifndef EX_13_4_HPP
#define EX_13_4_HPP

#include <iostream>

class Point {

public:
    Point() = default;
    Point(const Point& p) {
        std::cout << "this is copy constructor" << std::endl;
    }

private:
    

};

#endif