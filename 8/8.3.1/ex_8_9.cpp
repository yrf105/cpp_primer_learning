#include <iostream>
#include <string>
#include <sstream>

using std::istream;
using std::cin;
using std::ostream;
using std::cout;
using std::endl;
using std::string;
using std::istringstream;
using std::getline;

istringstream &foo (istringstream &iss) {
    string str;
    iss >> str;
    cout << str << endl;
    iss.clear ();
    return iss;
}

int main () {
    string line;
    getline (cin, line);
    istringstream iss (line);
    istringstream &is = foo (iss);
    cout << is.rdstate () << endl;
    return 0;
}