#include<iostream>

using std::cout;

void exchange (int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 1, b = 2;
    exchange(a, b);
    cout << a << '\n' << b << '\n';
    return 0;
}