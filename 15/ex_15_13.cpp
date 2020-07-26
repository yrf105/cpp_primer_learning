#include <iostream>
#include <string>

class base {

public:
    std::string name() { return base_name; }
    virtual void print(std::ostream &os) { os << base_name; }

private:
    std::string base_name = "base";

};

class derived : public base {

public:
    void print(std::ostream &os) override { base::print(os); os << " " << i; }

private:
    int i = 1;

};


int main() {
    base b;
    derived d;

    b.print(std::cout);
    d.print(std::cout);

    return 0;
}