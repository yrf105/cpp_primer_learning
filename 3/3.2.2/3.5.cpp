#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    // my code
    // int N = 0;
    // cin >> N;

    // string str = "";
    // string s = "";
    // for (int i = 0; i < N - 1; ++i) {
    //     cin >> s;
    //     str += s + " ";
    // }
    // cin >> s;
    // str += s;
    // cout << str << endl;

    // example code
    string concatenated;
    // windows 下输入 ctrl + z 可以在控制台中输入 EOF
    // for (string buffer; cin >> buffer; concatenated += buffer);
    // cout << concatenated << endl;

    for (string buffer; cin >> buffer; concatenated += (concatenated.empty() ? "" : " ") + buffer);
    cout << concatenated << endl;
    return 0;
}