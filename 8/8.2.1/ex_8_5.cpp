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
        for (auto i = 0; i < str.size (); ++i) {
            if (isalpha(str[i])) {
                string word;
                for (auto j = i; j < str.size () && isalpha(str[j]); ++j, ++i) {
                    word.push_back (str[j]);
                }
                svec.push_back (word);
            }
        }
    }
}

int main () {
    string fn = "in.in";
    vector<string> svec;
    func (fn, svec);
    for (auto s : svec) cout << s << endl;
    return 0;
} 