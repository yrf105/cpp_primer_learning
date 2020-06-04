#include<iostream>
#include<cstring>

using std::cout;
using std::endl;

int main() {
    const char cs1[] = "yue";
    const char cs2[] = "rui";
    char cs3[100];

    strcpy(cs3, cs1);
    strcat(cs3, " ");
    strcat(cs3, cs2);
    strcat(cs3, "");

    char *p = cs3;
    while (*p) cout << *p++ << endl;

    return 0;
}