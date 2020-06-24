#include<iostream>

using std::cout;

void print (int (&ia)[10]) {
    for (size_t i = 0; i != 10; ++i) {
        cout << ia[i] << '\n';
    }
}

int main() {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print (a);
    return 0;
}