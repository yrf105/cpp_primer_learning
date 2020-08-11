#include "Employee.hpp"
unsigned Employee::ID = 0;

#include <iostream>

int main() {
    Employee e1("yue");
    Employee e2("rui");

    std::cout << e1.get_name() << ":" << e1.get_id() << std::endl;
    std::cout << e2.get_name() << ":" << e2.get_id() << std::endl;

    return 0;
}