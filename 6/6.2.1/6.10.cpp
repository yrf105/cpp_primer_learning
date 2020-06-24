#include<iostream>

using std::cout;

void swap_(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main() {
    int a = 1, b = 2;
    swap_(&a, &b);
    cout << "a = " << a << '\0';
    cout << "b = " << b << '\0';
    return 0;
}