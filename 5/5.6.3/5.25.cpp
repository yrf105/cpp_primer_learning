#include<iostream>
#include<stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;

int main() {
    int i1, i2;

    while (cin >> i1 >> i2) {
        try {
            if (i2 == 0) {
                throw runtime_error("The divisor cannot be zero!");
            }
            cout << i1 / i2 << endl;
        } catch (runtime_error err) {
            cout << err.what() << "\nTry Again? Enter y or n" << endl;
            char ch;
            cin >> ch;
            if (!cin || ch == 'n') break;
        }
    }

    return 0;
}