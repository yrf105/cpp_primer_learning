#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> ivec = {1, 2, 3, 4, 5};

    // 要改变值就用引用
    for (auto &i : ivec) {
        i & 0x1 ? i *= 2 : i;
    }

    for (auto i : ivec) cout << i << endl;
    return 0;
}