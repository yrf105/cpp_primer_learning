#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void printIVec(vector<int> ivec) {
    cout << "size" << ivec.size() << endl;
    cout << "content" << endl;
    for (auto i : ivec) cout << i << endl;
}

void printSVec(vector<string> svec) {
    cout << "size" << svec.size() << endl;
    cout << "content" << endl;
    for (auto s : svec) cout << s << endl;
}

int main() {
    vector<int> v1;
    printIVec(v1);
    vector<int> v2(10);
    printIVec(v2);
    vector<int> v3(10, 42);
    printIVec(v3);
    vector<int> v4{10};
    printIVec(v4);
    vector<int> v5{10, 42};
    printIVec(v5);
    vector<string> v6{10};
    printSVec(v6);
    vector<string> v7{10, "hi"};
    printSVec(v7);

    return 0;
}