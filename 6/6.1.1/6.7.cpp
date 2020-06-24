#include<iostream>

using std::cout;

int cnt_calls() {
    static int count = 0;
    return (count++);
}


int main() {
    for (int i = 0; i < 10; ++i) cout << cnt_calls() << '\n';
    return 0;
}