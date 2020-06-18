#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::pair;

int main() {
    pair<string, int> max_duplicated;
    int count = 0;
    string cur_str, pre_str;

    while (cin >> cur_str) {
        if (cur_str == pre_str) ++count;
        else count = 0;
        if (count > max_duplicated.second) max_duplicated = {cur_str, count};
        pre_str = cur_str;
    }

    if (max_duplicated.first.empty()) cout << "There's no duplicated string." << endl;
    else cout << max_duplicated.first << " : " << max_duplicated.second + 1 << endl;

    return 0;
}