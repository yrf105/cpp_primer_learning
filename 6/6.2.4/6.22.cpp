#include<iostream>

using std::cout;

void exchange (int **ip1, int **ip2) {
    int *tmp = *ip1;
    *ip1 = *ip2;
    *ip2 = tmp;
}

int main() {
    int i1 = 1;
    int i2 = 2;
    int *ip1 = &i1;
    int *ip2 = &i2;
    exchange(&ip1, &ip2);
    cout << *ip1 << " " << *ip2 << '\n';
    return 0;
}