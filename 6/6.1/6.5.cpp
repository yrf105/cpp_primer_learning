#include<iostream>

using std::cout;
using std::endl;

int abs_(int x) {
    return x < 0 ? -x : x;
}

int main() {
    cout << abs_(-77) << endl;

    return 0;
}