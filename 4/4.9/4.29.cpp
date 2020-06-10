#include<iostream>

using std::cout;
using std::endl;

int main() {
    int x[10], *p = x;
    cout << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(p) / sizeof(*p) << endl;
    return 0;
}