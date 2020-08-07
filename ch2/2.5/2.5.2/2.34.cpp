#include<iostream>

using namespace std;

int main() {
    int i = 0, &r = i;
    auto a = r;

    const int ci = i, &cr = ci;
    // 顶层 const 会被忽略掉
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    a = 42;
    b = 42;
    c = 42;

    // d = 42; // d 是 int *
    // e = 42; // e 是 const int *
    // g = 42; // g 是 const int &
    return 0;
}
