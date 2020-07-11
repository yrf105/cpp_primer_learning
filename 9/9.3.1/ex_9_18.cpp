#include <iostream>
#include <string>
#include <deque>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::deque;
using std::list;

int main () {
    list<string> input;
    for (string str; cin >> str; input.push_back(str));
    for (auto c = input.cbegin(); c != input.cend(); ++c) {
        cout << *c << endl;
    }
    return 0;
}