#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::cin;
using std::vector;
using std::list;
using std::begin;
using std::end;

int main () {
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    list<int> ivec(begin(ia), end(ia));
    auto it = ivec.begin();
    while (it != ivec.end()) {
        if (*it & 1) it = ivec.erase(it);
        else ++it;
    }

    for (auto i : ivec) cout << i << " ";
    cout << std::endl;
    return 0;
}