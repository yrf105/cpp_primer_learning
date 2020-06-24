#include<iostream>
#include"Chapter6.hpp"

using std::cout;

int main() {
    cout << fact(5) << '\n';
    return 0;
}

int fact(int n) {
    int ret = 1;
    while (n > 1) ret *= n--;
    return ret;
}