#include<iostream>

using std::cout;

int lager(int i1, int *ip) {
    return i1 > *ip ? i1 : *ip;
}

int main() {
    int i1 = 5;
    int i2 = 8;
    cout << lager(i1, &i2) << '\n';
    return 0;
}