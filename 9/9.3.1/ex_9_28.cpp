#include <forward_list>
#include <string>
#include <iostream>

using std::cout;
using std::forward_list;
using std::string;

void insert_str(forward_list<string> fl, string str1, string str2) {
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()) {
        if (*curr == str1) {
            fl.insert_after(curr, str2);
            return ;
        }
        prev = curr;
        ++curr;
    }
    fl.insert_after(prev, str2);
}

int main () {

    return 0;
}