#include "ex_15_5.hpp"

int main() {
    Quote q("123", 4);
    Bulk_quote bq("1234", 5, 3, 0.8);

    print_total(std::cout, q, 4);
    print_total(std::cout, bq, 5);

    return 0;
}