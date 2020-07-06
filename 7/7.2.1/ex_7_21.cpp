#include <iostream>
#include "ex_7_21.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::istream;

int main () {
    Sales_data total(cin);
    if (!total.isbn().empty()) {
        while (cin) {
            Sales_data trans(cin); 
            if (total.isbn() == trans.isbn()) {
                total.combine (trans);
            } else {
                print (cout, total) << endl;;
                total = trans;
            }
        }
    } else {
        cerr << "No data!" << endl;
    }
    return 0;
}