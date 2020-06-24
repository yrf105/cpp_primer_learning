#include<iostream>
#include<string>

using std::cout;
using std::string;
// typedef string arrT[10];
using arrT = string[10];

string str[10] = {"qq", "qq", "qq", "qq", "qq", "qq", "qq", "qq", "qq", "qq"};
auto foo1(int i) -> string (*)[10] {
// arrT *foo1(int i) {
// string (&foo1(int i))[10] {
    return &str;
}

int main() {
    *foo1(3)[0] = "cc";
    for (auto s : str) {
        cout << s << '\n'; 
    }
    return 0;
}