#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    // for
    string str1("Hello World!!!");
    for (string::size_type i = 0; i < str1.size(); ++i) str1[i] = 'X';
    cout << str1 << endl;
    // while
    string str2("Hello World!!!");
    string::size_type i = 0;
    while (i < str2.size()) str2[i++] = 'X';
    cout << str2 << endl;
    return 0;
}