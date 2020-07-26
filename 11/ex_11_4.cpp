#include <map>
#include <set>
#include <string>
#include <iostream>

using namespace std;

int main() {
    string word_input;
    set<string> exclude = {"a"};
    map<string, int> word_count;
    while (cin >> word_input) {
        string word;
        for (auto c : word_input) if (isalpha(c)) word += c;
        for (auto &c : word) c = tolower(c);
        if (exclude.find (word) == exclude.end()) {
            ++ word_count[word];
        }
    }
    for (const auto &w : word_count) {
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;
    }
    return 0;
}