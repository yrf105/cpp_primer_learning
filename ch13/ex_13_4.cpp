#include <string>
#include "ex_13_4.hpp"

Point global;
Point foo_bar(Point arg) {
    std::string s1 = "yue", s2;
    // 这个会执行
    s2 = s1;
    int i1 = 1, i2;
    // 这个会执行
    i2 = i1;
    Point local = arg, *heap = new Point(global), local2 = arg;
    // 这个也不会执行
    local = local2;
    // 这个也不会执行
    *heap = local;
    Point pa[4] = {local, *heap};
    return *heap;
}

int main() {
    Point p;
    foo_bar(p);

    return 0;
}