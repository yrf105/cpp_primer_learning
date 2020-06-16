#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    cout << "input score :" << endl;
    int score = 0;
    cin >> score;

    if (score < 60) cout << scores[0] << endl;
    else cout << scores[(score - 50) / 10];

    return 0;
}