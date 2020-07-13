#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isShorter (const string &str1, const string &str2) {
    return str1.size() < str2.size();
}

void biggies (vector<string> &strvec, const int &sz) {
    sort(strvec.begin(), strvec.end());
    auto ite = unique(strvec.begin(), strvec.end());
    strvec.erase(ite, strvec.end());
    stable_sort(strvec.begin(), strvec.end(), isShorter);
    auto wc = find_if(strvec.begin(), strvec.end(), [sz](const string &str){return str.size() >= sz;});
    auto count = strvec.end() - wc;
    cout << count << endl;
    for_each(wc, strvec.end(), [](const string &str){cout << str << " ";});
    cout << endl;
}

int main () {
    vector<string> strvec{"yue", "rui", "feng"};
    biggies(strvec, 3);
    return 0;
}