#include<iostream>
#include<string>
#include<typeinfo>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str;
    string str2;
    while (getline(cin, str)) {
        for (auto c : str) {
            if (ispunct(c)) continue;
            str2 += c;
        }   
    }
    cout << str2 << endl;

    return 0;
}