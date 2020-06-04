#include<iostream>
#include<cstring>
#include<string>

using std::cout;
using std::endl;
using std::string;

int main() {
    string s1 = "yuerui2feng";
    string s2 = "yueruifeng";

    if (s1 == s2) cout << "equal" << endl;
    else cout << "no equal" << endl;

    const char cs1[] = "yueri2feng";
    const char cs2[] = "yuerui2feng";

    if (!strcmp(cs1, cs2)) cout << "equal" << endl;
    else cout << "no equal" << endl;

    return 0;
}