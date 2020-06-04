#include<iostream>
#include<vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 6, 4, 5};

    // 长度相同
    int i = 0;
    for (; i < 5; ++i) {
        if (a[i] != b[i]) {
            cout << "no equal" << endl;
            break;
        }
    }
    if (i >= 5) cout << "equal" << endl;

    vector<int> avec = {1, 2, 3, 4, 5};
    vector<int> bvec = {1, 2, 2, 4, 5};

    if (avec == bvec) cout << "equal" << endl;
    else cout << "no equal" << endl;

    return 0;
}