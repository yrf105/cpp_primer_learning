#include <iostream>
#include <tuple>
#include <string>
#include <vector>
#include <iostream>

using std::pair;
using std::tuple;
using std::string;
using std::vector;
using std::get;
using std::cout;
using std::endl;

int main() {
    tuple<string, vector<string>, pair<string, int>> t("yue", {"yue", "rui"}, {"feng", 3});
    cout << get<0>(t) << endl;
    return 0;
}