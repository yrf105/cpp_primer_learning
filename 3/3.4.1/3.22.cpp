#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    string str;
    vector<string> text;
    vector<string> text_trans;
    while (getline(cin, str)) {
        text.push_back(str);
    }

    for (auto it = text.cbegin(); it != text.cend() && !(it -> empty()); ++it) {
        // cout << (*it)[0] << endl;
        // for (auto i : *it) cout << i ;
        for (auto i = (*it).cbegin(); i != (*it).cend(); ++i) cout << (char)toupper(*i);
    }

    return 0;
}