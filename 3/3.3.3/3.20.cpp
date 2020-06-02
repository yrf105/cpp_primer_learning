#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void printIVec(vector<int> ivec) {
    for (auto i : ivec) cout << i << endl;
}

int main() {
    int i = 0;
    vector<int> ivec;
    
    while (cin >> i) {
        ivec.push_back(i);
    }
    
    if (ivec.size() % 2 == 0) {
        for (int i = 0; i + 1 < ivec.size(); ++i) {
            cout << ivec[i] + ivec[i + 1] << endl;
        }
    } else {
        int i = 0;
        for (i = 0; i + 1 < ivec.size(); ++i) {
            cout << ivec[i] + ivec[i + 1] << endl;
        }
        cout << ivec[i] << endl;
    }
    
    if (ivec.size() % 2 == 0) {
        int l = 0, r = ivec.size() - 1;
        while (l < r) {
            cout << ivec[l++] + ivec[r--] << endl;
        }
    } else {
        int l = 0, r = ivec.size() - 1;
        while (l < r) {
            cout << ivec[l++] + ivec[r--] << endl;
        }
        cout << ivec[l] << endl;
    }

    return 0;
}