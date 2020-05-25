#include<iostream>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string s;
    // 一次读取一整行
    // getline(cin, s);
    // 一次读取一个词
    cin >> s;
    cout << s << endl;
    return 0;
}