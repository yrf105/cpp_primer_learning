#include <iostream>
#include <forward_list>

using std::forward_list;
using std::cout;

int main () {
    forward_list<int> fl{ 1, 2, 3, 4 };
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end()) {
        if (*curr & 1) curr = fl.erase_after(prev);
        else {
            prev = curr;
            ++curr;
        }
    }

    for (auto i : fl) cout << i << " ";
    cout << std::endl;

    return 0;
}