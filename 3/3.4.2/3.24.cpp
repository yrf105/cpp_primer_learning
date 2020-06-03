#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    vector<int> ivec;

    for (int buffer; cin >> buffer; ivec.push_back(buffer));

    for (auto it = ivec.cbegin(); it != ivec.cend() &&  it + 1 != ivec.cend(); ++it) cout << *it + *(it + 1) << endl; 

    for (auto beg = ivec.cbegin(), end = ivec.cend(); beg != end; ++beg, --end) cout << *beg + *(end - 1) << endl; 
    return 0;
}