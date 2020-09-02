#include "ex_16_11.hpp"
#include <exception>

int main() {

    List<int> l;
    List<int> l1(l);
    l = l1;
    return 0;
}