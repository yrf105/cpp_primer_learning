#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>

class Employee {
    static unsigned ID;

public:
    Employee() = default;
    Employee(const std::string &nm) : name(nm), id(ID++){};
    Employee(const Employee &) = delete;
    Employee& operator= (const Employee &) = delete;
    ~Employee() = default;

    const std::string get_name() const {return name;}
    const unsigned get_id() const { return id; }

private:
    std::string name;
    unsigned id = 0;

};

#endif