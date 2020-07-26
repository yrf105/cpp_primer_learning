#include <map>
#include <set>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> words;
    string word;
    while (cin >> word) {
        for (auto s : words) {
            if (s == word) continue;
        }
        words.push_back(word);
    }
    return 0;
}