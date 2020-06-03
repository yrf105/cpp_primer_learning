#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    vector<unsigned int> scores(11, 0);
    auto beg = scores.begin();
    // 下面 printf 处写 cout 就不行 
    for(int buffer; cin >> buffer; buffer <= 100 ? ++(*(beg + buffer / 10)) : (printf("score smaller than 100")));
    for (auto i : scores) cout << i << endl;
    return 0;
}