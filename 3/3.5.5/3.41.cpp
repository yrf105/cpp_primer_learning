#include<iostream>
#include<vector>
#include<iterator>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main() {
    int a[] = {1,2,3};
    vector<int> b(begin(a), end(a));
    for (auto i : b) cout << i << endl;

    return 0;
}