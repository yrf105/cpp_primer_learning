#include <fstream>
#include <iostream>
#include <string>

#include "TextQuery.hpp"

using std::ifstream;
using std::cin;
using std::cout;
using std::endl;
using std::string;

void runQuery(ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        cout << "enter word to look for, or q to quit: " << endl;
        string s;
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
} 

int main() {
    string file_name = "txt.in";
    ifstream infile;
    infile.open(file_name);

    runQuery(infile);

    return 0;
}