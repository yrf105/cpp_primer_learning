#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::ifstream;
using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::getline;

void func (string fn, vector <string> &svec) {
    ifstream in (fn);
    string str;
    while (getline (in, str)) {
        svec.push_back (str);
    }
}

int main () {
    string fn = "in.in";
    vector<string> svec;
    func (fn, svec);
    for (auto s : svec) cout << s << endl;
    return 0;
} 