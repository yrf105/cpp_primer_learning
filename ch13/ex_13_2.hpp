#ifndef EX_13_2_HPP
#define EX_13_2_HPP

#include <string>

class Sales_data {

public:
    Sales_data() = default;
//  error: invalid constructor; you probably meant ‘Sales_data (const Sales_data&)’
    // Sales_data(Sales_data);

private:
    std::string bookNo;

};

// Sales_data::Sales_data(Sales_data rhs) : bookNo(rhs.book) { };

#endif