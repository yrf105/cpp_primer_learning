#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "ex_10_12.hpp"

using std::cout;
using std::endl;
using std::sort;
using std::stable_sort;
using std::unique;
using std::string;
using std::vector;

bool compareIsbn (const Sales_data &sd1, const Sales_data &sd2) {
    return sd1.isbn() < sd2.isbn();
}

int main () {
    vector<Sales_data> sdvec{Sales_data("123"), Sales_data("234")};
    sort(sdvec.begin(), sdvec.end(), compareIsbn);
    for (auto sd : sdvec) cout << sd.isbn() << endl;

    return 0;
}