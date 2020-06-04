#include<iostream>

using std::cout;
using std::endl;

int main() {
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    for (auto &i : ia) {
        for (auto j : i) cout << j << endl;
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << ia[i][j] << endl;
        }
    }

    // int (*p)[4]; // 指向含有 4 个整数的数组
    for (int (*p)[4] = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            cout << *q << endl;
        }
    }

    return 0;
}