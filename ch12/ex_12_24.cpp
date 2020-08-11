#include <iostream>

using namespace std;

int main() {
    char c;
    char *str = new char[10]();
    int str_len = 10;
    char *end_str = str;
    while (cin >> c) {
        *end_str = c;
        ++end_str;
        if (end_str - str >= str_len) {
            char *str_tmp = new char[str_len * 2]();
            copy(str, end_str, str_tmp);
            str = str_tmp;
            end_str = str + str_len;
            str_len *= 2; 
        }
    }

    cout << str << endl;
    delete[] str;

    return 0;
}