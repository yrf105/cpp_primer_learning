#include <iostream>
#include <deque>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::deque;
using std::list;

int main () {
    list<int> ilist = {1, 2, 3};
    deque<int> odd, even;
    for (auto i : ilist) {
        // if (i & 1) odd.push_back (i);
        // else even.push_back (i);
        (i & 1 ? odd : even).push_back (i);
    }
    
    for (int i : odd) {
        cout << i << endl;
    }
    for (int i : even) {
        cout << i << endl;
    }

    return 0;
}