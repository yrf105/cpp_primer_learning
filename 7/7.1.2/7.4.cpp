#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

struct Person {
    auto get_name() const -> string const& {return name;}
    auto get_address() const -> string const& {return address;}

    string name;
    string address;
};

int main () {

    return 0;
}