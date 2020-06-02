#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std:: vector;

void printSVec(vector<string> svec) {
    for (auto s : svec) cout << s << endl;
}

int main() {
    string word;
    vector<string> words;

    while (cin >> word) {
        words.push_back(word);
    }

    printSVec(words);

    for (auto &s : words) {
        for (auto &c : s) {
            c = toupper(c);
        }
    }

    printSVec(words);

    return 0;
}