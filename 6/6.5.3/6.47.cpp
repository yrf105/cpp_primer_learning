#define NDEBUG
#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

void print_vector(vector<int> ivec) {
    #ifndef NDEBUG
        cout << ivec.size() << endl;
    #endif
    if (ivec.size() == 0) return ;
    cout << ivec[0] << '\n';
    print_vector(vector<int>(ivec.begin() + 1, ivec.end()));
}

int main() {
    vector<int> ivec{1, 2};
    print_vector(ivec);
    return 0;
}