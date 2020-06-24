#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int fact(int n) {
    int ret = 1;
    while (n > 1) ret *= n--;
    return ret;
}

void fact_interaction() {
    cout << "please input a number!" << endl;
    int n; 
    cin >> n;
    cout << fact(n) << endl;
}

int main() {
    fact_interaction();
    return 0;
}