#include<iostream>
#include "ex_7_11.hpp"

using std::cin;
using std::cout;
using std::endl;

int main () {
    Sales_data item;
    print (cout, item) << endl;

    Sales_data item1 ("123");
    print (cout, item1) << endl;

    Sales_data item2 ("123", 13, 12.5);
    print (cout, item2) << endl;

    Sales_data item3 (cin);
    print (cout, item3) << endl;
}