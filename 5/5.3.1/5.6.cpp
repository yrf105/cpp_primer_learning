#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    cout << "input score :" << endl;
    int score = 0;
    cin >> score;
    cout << (score < 60 ? scores[0] : scores[(score - 50) / 10]) << endl;

    return 0;
}