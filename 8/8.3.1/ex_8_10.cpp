#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iostream>

using std::ifstream;
using std::istringstream;
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::getline;

int main () {
    vector<string> svec;
    string line;
    string file_name = "ex_8_10.in";
    ifstream in;
    in.open (file_name);
    while (getline (in, line)) {
        svec.push_back (line);
    }

    for (auto s : svec) {
        istringstream str_in (s);
        string word;
        while (str_in >> word) {
            cout << word << endl;
        }
    }

    return 0;
}
