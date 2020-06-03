#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    int num = 0;
    vector<int> ivec;
    for(int i = 0; i != 10; ++i) {
        cin >> num;
        ivec.push_back(num);
    }

    for(auto it = ivec.begin(); it != ivec.end(); ++it) {
        *it = (*it) * (*it);
    }

    for(auto i : ivec) cout << i << endl;

    return 0;
}