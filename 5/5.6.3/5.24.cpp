#include<iostream>
#include<stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;

int main() {
    int i1, i2;

    while (cin >> i1 >> i2) {
        if (i2 == 0) {
            throw runtime_error("The divisor cannot be zero!");
        }
        cout << i1 / i2 << endl;
    }

    return 0;
}

// 1 0
// terminate called after throwing an instance of 'std::runtime_error'
//   what():  The divisor cannot be zero!