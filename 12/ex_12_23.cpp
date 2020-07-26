#include <string>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string a_str = "fe", b_str = "ng";
    char a[] = "yue", b[] = "rui";
    char *c = new char[10](); 
    strcat(c, a);
    strcat(c, b);
    char *cp = c;
    cout << c << endl;
    delete[] c;

    string c_str = a_str + b_str;
    string *d_str = new string[1];
    d_str = &c_str;
    cout << *d_str << endl;
    return 0;
}