#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> a{1,2,3,5};
    int b[4] = {0};

    for (int i = 0; i < 4; ++i) b[i] =  a[i];
    
    for (auto i : b) cout << i << endl;

    return 0;
}