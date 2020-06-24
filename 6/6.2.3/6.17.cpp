#include<iostream>
#include<cctype>
#include<string>

using std::cout;
using std::string;

bool have_upper(const string &s) {
    for (auto c : s) {
        if (isupper(c)) return true;
    }
    return false;
}

void upper_to_lower(string &s) {
    for (auto &c : s) {
        if (isupper(c)) c = tolower(c);
    }
}

int main() {
    string s("Yue");
    cout << have_upper(s) << '\n';
    upper_to_lower(s);
    cout << s << '\n';
    return 0;
}