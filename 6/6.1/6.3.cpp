#include<iostream>

using std::cout;

int fact(int n) {
    int ret = 1;
    while (n > 1) ret *= n--;
    return ret;
}

int main() {
    cout << fact(5) << '\n';
    return 0;
}