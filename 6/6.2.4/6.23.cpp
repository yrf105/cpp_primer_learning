#include<iostream>

using std::cout;
using std::begin;
using std::end;

void print(const int *beg, const int *end) {
    while (beg != end) {
        cout << *beg++ << '\n';
    }
}

int main() {
    int i = 0;
    int j[2] = {0, 1};
    // print(begin(&i), end(&i));
    print(begin(j), end(j));
    return 0;
}