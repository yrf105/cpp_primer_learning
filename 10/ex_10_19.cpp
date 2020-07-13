#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isShorter (const string &str1, const string &str2) {
    return str1.size() < str2.size();
}

void biggies (vector<string> &strvec, const int &sz) {
    auto ite = unique(strvec.begin(), strvec.end());
    strvec.erase(ite, strvec.end());
    stable_sort(strvec.begin(), strvec.end(), isShorter);
    auto wc = stable_partition(strvec.begin(), strvec.end(), [sz](const string &str){return str.size() >= sz;});
    auto count = wc - strvec.begin();
    cout << count << endl;
    for_each(strvec.begin(), wc, [](const string &str){cout << str << " ";});
    cout << endl;
}

int main () {
    vector<string> strvec{"yue", "rui", "feng"};
    biggies(strvec, 3);
    return 0;
}