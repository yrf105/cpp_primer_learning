#include <iostream>
#include <string>

using std::istream;
using std::cin;
using std::ostream;
using std::cout;
using std::endl;
using std::string;

istream &foo (istream &is) {
    string str;
    while (!is.eof ()) {
        is >> str;
    }
    cout << str << endl;
    is.clear ();
    return is;
}

int main () {
    istream &is = foo (cin);
    cout << is.rdstate () << endl;
    return 0;
}