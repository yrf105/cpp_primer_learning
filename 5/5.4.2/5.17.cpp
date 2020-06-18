#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

bool compare_ivec(vector<int> &ivec1, vector<int> &ivec2) {
    for (int i = 0; i < ivec1.size(); ++i) {
        if (ivec1[i] != ivec2[i]) return false;
    }

    return true;
}

int main() {
    vector<int> ivec1 = {0, 1, 1, 2};
    vector<int> ivec2 = {0, 1, 1, 2, 3, 5, 8};

    if (ivec1.size() >= ivec2.size()) cout << compare_ivec(ivec2, ivec1) << endl;
    else cout << compare_ivec(ivec1, ivec2) << endl;

    return 0;
}