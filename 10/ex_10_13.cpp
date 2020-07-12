#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::partition;

bool helper (const string &str1) {
    return str1.size() >= 5;
}

int main () {
    vector<string> svec{"yue", "ruirui", "feng"};
    auto part = partition(svec.begin(), svec.end(), helper);
    for (auto itr = svec.begin(); itr != part; ++itr) cout << *itr << endl;
 

    return 0;
}