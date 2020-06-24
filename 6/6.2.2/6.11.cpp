#include<iostream>

using std::cout;

void reset(int &i) {
    i = 0;
}

int main() {
    int i = 18;
    reset(i);
    cout << i << '\n';
    return 0;
}