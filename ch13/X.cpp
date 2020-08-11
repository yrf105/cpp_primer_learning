#include "X.hpp"

#include <vector>

void foo1(X x){};
void foo2(X &x){};

int main() {
    X *x = new X();
    foo1(*x);
    foo2(*x);
    std::vector<X> xvec;
    xvec.push_back(*x);
    delete x;
    return 0;
}