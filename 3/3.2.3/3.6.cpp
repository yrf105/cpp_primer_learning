#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str = "Hello world!!!";
    //////////////XXXXXXXXXXXXXX
    for (auto &c : str)
        c = 'X';
    cout << str << endl;

    return 0;
}