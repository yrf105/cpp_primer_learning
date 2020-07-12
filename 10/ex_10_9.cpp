#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::sort;
using std::unique;
using std::string;
using std::vector;

void svec_print (vector<string> svec) {
    for (auto str : svec) {
        cout << str << endl;
    }
}

void elipDups (vector<string> svec) {
    cout << 1 << endl;
    svec_print(svec);
    sort(svec.begin(), svec.end());
    auto it = unique(svec.begin(), svec.end());
    cout << 2 << endl;
    svec_print(svec);
    svec.erase(it, svec.end());
    cout << 3 << endl;
    svec_print(svec);
}

int main () {
    vector<string> svec{"yue", "rui", "feng", "feng"};
    elipDups(svec);

    return 0;
}