#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // int a[10] = {0};
    // int a1[10] = {0};
    vector<int> a(10, 0);
    vector<int> a1(10, 0);
    for (auto i = 0; i < 10; ++i) a[i] = i;
    for (auto i : a) cout << i << endl;
    for (auto i = 0; i < 10; ++i) a1[i] = a[i];
    for (auto i : a1) cout << i << endl;
    return 0;
}